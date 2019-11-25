#!/bin/bash

sudo docker run -it \
                --net=host \
                --env=DISPLAY \
                --env=QT_X11_NO_MITSHM=1 \
                --volume=/tmp/.X11-unix:/tmp/.X11-unix:rw \
                --rm \
                --name hdl_graph_slam \
                -p 52698:52698 \
                hdl_graph_slam \
                /ros_entrypoint.sh bash


# sudo docker run -it \
#     --net=host\
#     --env=DISPLAY=$DISPLAY \
#     --env=QT_X11_NO_MITSHM=1\
#     --volume=/tmp/.X11-unix:/tmp/.X11-unix:rw \
#     --volume=/home/tutor:/home/tutor \
#     --device=/dev/input:/dev/input \
#     --device=/dev/dri:/dev/dri \
#     --rm \
#     -p 52698:52698 \
#     a548e4a11ebb \
#     /ros_entrypoint.sh bash
#export MESA_GL_VERSION_OVERRIDE=3.3