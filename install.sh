#!/bin/bash

# Git repos to download below
aasdkRepo="https://github.com/OpenDsh/aasdk"



# Depencies to install below
dependencies=(
    "cmake"
    "libboost-all-dev"
    "libusb-1.0.0-dev"
    "libssl-dev"
    "libprotobuf-dev"
    "protobuf-c-compiler"
    "protobuf-compiler"
    ""
)

if [ $# -gt 0 ]; then
    deps=false
    aasdk=false
    gstreamer=false
    abyssDash=false

    while [ "$1" != "" ]; do
        case $1 in
            --deps)
                        deps=true
                        echo "Deps is true"
                        ;;
            --aasdk )   aasdk=true
                        echo "AASDK is true"
                        ;;
            * )
        esac
        echo "Shift?"
    done
else
    echo "Full Install Running $(\n)"
    deps=true
    aasdk=true
    gstreamer=true
    abyssDash=true
fi


#git clone $aasdkRepo