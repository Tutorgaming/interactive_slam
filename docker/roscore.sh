#!/bin/bash

sudo docker exec -it hdl_graph_slam \
                /ros_entrypoint.sh bash \
                -c "roscore"