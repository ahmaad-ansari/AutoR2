#!/bin/bash
xhost + && \

show_help() {
    echo "Usage: $0 [--no-devices] [--velodyne] [--connected-devices]"
    echo ""
    echo "Options:"
    echo "  --no-devices         Run the container without mounting devices"
    echo "  --velodyne           Run a custom container for Velodyne"
    echo "  --connected-devices  Run the container with connected devices (default)"
}

if [[ "$@" =~ "--no-devices" ]]; then
  docker run -it \
    --net=host \
    --env="DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    -v /home/jetson/r2ware:/root/r2ware \
    -v /home/jetson/r2ware/.bashrc_yahboom:/root/.bashrc \
    -p 9090:9090 \
    -p 8888:8888 \
    --name r2-container-no-devices \
    r2ware/yahboomtechnology:latest \
    /bin/bash
elif [[ "$@" =~ "--velodyne" ]]; then
  docker run -it \
    --net=host \
    --env="DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    -v /home/jetson/r2ware:/root/r2ware \
    -v /home/jetson/r2ware/.bashrc_velodyne:/root/.bashrc \
    --name velodyne-lidar \
    r2ware/velodyne:latest \
    /bin/bash
elif [[ "$@" =~ "--connected-devices" ]]; then
  # Check if the container "r2-container" is running
  if [ "$(docker ps -q -f name=r2-container)" ]; then
      docker stop r2-container
  fi

  # Check if the container "r2-container" exists (running or stopped)
  if [ "$(docker ps -aq -f name=r2-container)" ]; then
      docker rm r2-container
  fi

  # Check if the network "autoware_r2_bridge" exists, create it if not
  if [ ! "$(docker network ls -q -f name=autoware_r2_bridge)" ]; then
      docker network create autoware_r2_bridge
  fi

  # Get the Astra device paths dynamically
  ASTRA_DEPTH=$(readlink -f /dev/astradepth)
  ASTRA_UVC=$(readlink -f /dev/astrauvc)

  docker run -it \
  --net=host \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  -v /home/jetson/r2ware:/root/r2ware \
  -v /home/jetson/r2ware/.bashrc_yahboom:/root/.bashrc \
  -v "$ASTRA_DEPTH:$ASTRA_DEPTH" \
  -v "$ASTRA_UVC:$ASTRA_UVC" \
  --device=/dev/astradepth \
  --device=/dev/astrauvc \
  --device=/dev/video0 \
  --device=/dev/myserial \
  --device=/dev/input \
  -p 9090:9090 \
  -p 8888:8888 \
  --name r2-container \
  r2ware/yahboomtechnology:latest /bin/bash
else
  show_help
  exit 1
fi

