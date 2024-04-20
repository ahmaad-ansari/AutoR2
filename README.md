# R2Ware and Autonomous Valet Parking

This repository is designed to facilitate deployment on the ROSMASTER R2 model car and stream all onboard sensor data to a topic compatible with Autoware. Following deployment, users can execute the external parking detector and autonomous parking script to enable autonomous valet parking of the model car. Please note that while the documentation is provided, it is incomplete and may be updated progressively.

## Table of Contents

- [Getting Started](#getting-started)
- [Tier IV Nebula Sensor Driver](#tier-iv-nebula-sensor-driver)
    - [Prerequisites](#prerequisites)
    - [Setup Steps](#setup-steps)
- [Multi-Machine Wi-Fi Communication Setup](#multi-machine-wi-fi-communication-setup)
    - [R2 Machine](#r2-machine)
        - [Local Machine Setup](#local-machine-setup)
        - [Docker Container Setup](#docker-container-setup)
    - [Ground Station Setup](#ground-station-setup)
    - [Test Connection](#test-connection)
- [System Deployment](#system-deployment)


## Getting Started 

1. **Clone Repository:**

   Clone the R2Ware repository and navigate into the project directory:

   ```bash
   cd ~/
   git clone https://github.com/zubxxr/r2ware.git
   cd r2ware
   ```

2. **Initialize Workspace:**

   Create the `src` directory and import the necessary repositories:

   ```bash
   mkdir src
   vcs import src < r2ware.repos
   ```

3. **Set Up Docker:**

   Run the provided script to set up Docker for the R2Ware environment. You can optionally specify the `vlp32` option to configure the Docker container for VLP32 usage:

   ```bash
   ./run_docker.sh vlp32
   cd ~/r2ware
   ```

4. **Install Dependencies:**

   Install ROS dependencies using `rosdep`:

   ```bash
   apt update
   rosdep update
   rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO
   ```

5. **Build the Workspace:**

   Build the R2Ware workspace using `colcon`:

   ```bash
   colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
   ```

   Or build specific packages:

   ```bash
   colcon build --symlink-install --packages-select r2ware_control
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_sensing
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_launch
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_status
   ```
## Tier IV Nebula Sensor Driver

This guide provides instructions for setting up the Nebula Driver for VLP32C Velodyne LiDAR. It must be done locally, on a Galactic or Humble ROS Distribution.

### Prerequisites

Before setting up the Nebula Driver, ensure you have the following prerequisites installed:

- ROS (Galactic or Humble distribution)
- Velodyne ROS package

You can install the Velodyne ROS package using the following command:

```bash
sudo apt-get install ros-<distro>-velodyne
```

### Setup Steps

1. **Create Workspace:**

   Create a workspace directory for the Nebula Sensor Driver on the local machine:

   ```bash
   mkdir -p ~/nebula_sensor_driver/src
   cd ~/nebula_sensor_driver
   ```

2. **Clone Nebula Repository:**

   Clone the Nebula repository into the `src` directory:

   ```bash
   git clone https://github.com/tier4/nebula.git src
   ```

3. **Import Dependencies:**

   Import the dependencies using `vcs`:

   ```bash
   vcs import src < src/build_depends.repos
   ```

4. **Install Dependencies:**

   Install ROS dependencies using `rosdep`:

   ```bash
   rosdep install --from-paths src --ignore-src -y -r
   ```

5. **Build Nebula:**

   Build the Nebula driver using `colcon`:

   ```bash
   colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
   ```

>- Make sure to source your ROS workspace (`source ~/nebula_sensor_driver/install/setup.bash`) before using the Nebula Driver. And add the following to your `.bashrc` file.
>
> ```bash
> export ROS_LOCALHOST_ONLY=1
> export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
> if [ ! -e /tmp/cycloneDDS_configured ]; then
>     sudo sysctl -w net.core.rmem_max=2147483647
>     sudo ip link set lo multicast on
>     touch /tmp/cycloneDDS_configured
> fi
> ```

## Multi-Machine Wi-Fi Communication Setup

This section outlines the setup process for enabling multi-machine communication between the R2 and a ground station. It consists of setting up the network for the R2 locally and in docker container, and the ground station so they can all recognize each other over Wi-Fi. 

### *R2 Machine*

#### Local Machine Setup

1. **Enable Multicast**: Run the following commands locally to enable communication with a ground station **on the same network**:

   ```bash
   sudo ip link set lo multicast on
   sudo ufw disable
   ```

   You can check the status of the firewall with the following command:

   ```bash
   sudo ufw status
   ```

#### Docker Container Setup

2. **Inside Docker Container**: Run the following commands in the container to enable communication with a ground station on the same network:

   ```bash
   apt install -y ros-foxy-fastrtps
   ```

### *Ground Station Setup*

1. **Ground Station Configuration**: Run the following commands on the ground station.

   ```bash
   sudo ufw disable
   sudo ip link set lo multicast on
   sudo apt install -y ros-humble-fastrtps
   ```

2. **Enable Network Discovery**: Set the following environment variables to enable ROS 2 communication:

   ```bash
   export ROS_LOCALHOST_ONLY=0
   export ROS_DOMAIN_ID=32
   export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
   ```

### *Test Connection*

4. **Test Communication**: Test the communications between the two machines. Run the talker on 1 machine and listener on the other.

   ```bash
   ros2 run demo_nodes_cpp listener
   ```

   ```bash
   ros2 run demo_nodes_cpp talker
   ```

## System Deployment

To run the entire system, follow these steps:

1. **Run Nebula Velodyne Driver on Local Machine.**

   ```bash
   ros2 launch nebula_ros nebula_launch.py sensor_model:=VLP32
   ```

2. **Run Vehicle Sensor Data Launcher in Docker Container.**
   
   ```bash
   ros2 launch r2ware_launch r2ware_launch.py
   ```

3. **Run Autoware on Ground Station.**

   ```bash
   ros2 launch autoware_launch autoware.launch.xml \
    map_path:=/PATH/TO/YOUR/MAP \
    vehicle_model:=YOUR_VEHICLE \
    sensor_model:=YOUR_SENSOR_KIT
   ```
4. **Execute Autonomous Valet Parking**: Follow the steps [here](https://github.com/zubxxr/Automated-Valet-Parking-Autoware) to start the parking spot detector and enable the vehicle to autonomously park itself.
