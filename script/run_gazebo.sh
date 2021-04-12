#!/bin/sh

export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/myworld/build

gazebo ../worlds/myworld.sdf &
