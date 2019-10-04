#!/bin/bash		-w
#通知编译器我们要编译哪些源码
#这里编译mini_linux_module.c成mini_linux_module.o
obj-m += mini_linux_module.o


#Kernel源码目录变量
KDIR := /home/topeet/android4.0/


#当前变量
PWD ?= $(shell pwd)


#make命名默认寻找第一个目标
all:
	make -C $(KDIR) M=$(PWD) modules
	
#make clean执行的操作是删除后缀为o的文件
clean:
	rm -rf *.o