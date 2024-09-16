# WIP How to run ROS2 on Windows (a guide)
the easier way to get ubuntu 22.04:
(https://learn.microsoft.com/en-us/windows/wsl/install)

1. open command prompt 

run ```wsl --status```  // wsl should already be installed in your os (windows 11)
    look for default version 2
run ```wsl -v``` or ```wsl --version```

```wsl -l -o``` or ```wsl --list --online```
will list all of your available distros

```wsl --install -d Ubuntu-22.04```


follow prompts to setup username and password 

Documentation:
https://docs.omniverse.nvidia.com/isaacsim/latest/installation/install_ros.html#:~:text=In%20Linux%20follow%20the%20instructions,the%20section%20above%20within%20WSL2.


you can access it by going to the microsoft store and searching "ubuntu"
please download the Ubuntu 22.04 LTS

start wsl by typing "wsl"  in terminal

follow https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html
for ros2 humble installation


## Download Docker Desktop
download docker desktop
go to settings -> go to resoruces -> wsl integration -> enable integration with additional distros
apply and restart

github clone repo for issac ros common for the dev enviorrment with 

git clone https://github.com/NVIDIA-ISAAC-ROS/isaac_ros_common.git
Isaac ros dev 

then https://nvidia-isaac-ros.github.io/getting_started/dev_env_setup.html 
if on x86_64 platforms install nvidia-container-toolkit
if you have an nvidia gpu you do not need to install the driver if using wsl

if using docker-desktop and wsl you can not restart docker with systemctl because docekr does not exist on the wsl instance (it only has pass through so use docker desktop gui) 

The https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/latest/install-guide.html#configuring-docker
instuctions assume that you are running on a native linux boot. 
instead you need to:

## Configure Nvidia Container toolkit for WSL
open Docker desktop
go to settings
go to Docker Engine
insert the following code block (remember to add comma seperation after previous json element)

```
"runtimes": {
        "nvidia": {
            "path": "nvidia-container-runtime",
            "runtimeArgs": []
        }
    },
    "default-runtime": "nvidia"
```