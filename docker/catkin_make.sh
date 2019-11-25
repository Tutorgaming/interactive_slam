#!/bin/bash

sudo docker exec -it hdl_graph_slam \
                /ros_entrypoint.sh bash \
                -c "cd /root/catkin_ws; catkin_make"