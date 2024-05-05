# R2Ware

## Getting Started

1. **Clone Repository:**

   Clone the R2Ware repository and navigate into the project directory:

   ```bash
   cd ~/
   git clone https://github.com/ahmaad-ansari/r2ware.git
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

## Multi-Machine Communication Setup

This section outlines the setup process for enabling multi-machine communication between the R2 and a ground station.

### R2 Machine

#### Local Machine Setup

1. **Enable Multicast:**

   Run the following commands on the R2's local machine to enable communication with a ground station **on the same network**:

   ```bash
   sudo ip link set lo multicast on
   sudo ufw disable
   ```

   You can check the status of the firewall with the following command:

   ```bash
   sudo ufw status
   ```

#### Docker Container Setup

2. **Inside Docker Container:**

   Run the following commands while inside the R2's Docker container to enable communication with a ground station on the same network:

   ```bash
   apt install -y ros-foxy-fastrtps
   ```

### Ground Station Setup

3. **Ground Station Configuration:**

   Run the following commands on the ground station running Autoware:

   ```bash
   sudo ufw disable
   sudo ip link set lo multicast on
   sudo apt install -y ros-humble-fastrtps
   ```

   Set the following environment variables to enable ROS 2 communication:

   ```bash
   export ROS_LOCALHOST_ONLY=0
   export ROS_DOMAIN_ID=32
   ```

### Test Connection

4. **Test Communication:**

   Once you have completed the setup steps, you can test the communication between the two machines by running one command on each machine:

   ```bash
   ros2 run demo_nodes_cpp listener
   ```

   ```bash
   ros2 run demo_nodes_cpp talker
   ```

## System Deployment

To run the entire system, follow these steps:

1. **Run in Docker Container:**

   ```bash
   ros2 launch r2ware_launch r2ware_launch.py
   ```

2. **Run on Ground Station:**

   ```bash
   <autoware-command>
   ```