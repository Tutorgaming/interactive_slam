#!/bin/bash

cd ./melodic; sudo docker-compose run --rm --name hdl_graph_slam hdl_graph_slam

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
