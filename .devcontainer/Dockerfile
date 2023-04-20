FROM ubuntu:22.04

RUN apt-get update && apt-get install -y build-essential valgrind python3 \
    vim bash-completion git gdb python3-pip

RUN pip3 install check50

RUN rm /etc/apt/apt.conf.d/docker-clean

COPY comp26020-devcontainer /root/

WORKDIR /root
