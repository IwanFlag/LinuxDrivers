#!/bin/bash		-w
#֪ͨ����������Ҫ������ЩԴ��
#�������mini_linux_module.c��mini_linux_module.o
obj-m += mini_linux_module.o


#KernelԴ��Ŀ¼����
KDIR := /home/topeet/android4.0/


#��ǰ����
PWD ?= $(shell pwd)


#make����Ĭ��Ѱ�ҵ�һ��Ŀ��
all:
	make -C $(KDIR) M=$(PWD) modules
	
#make cleanִ�еĲ�����ɾ����׺Ϊo���ļ�
clean:
	rm -rf *.o