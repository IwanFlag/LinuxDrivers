#include "linux/module.h"
#include "linux/init.h"
#....����git

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR(YSHENG);

static void hello_init(void)
{
	printk(KERN_EMERG "[MODULE]Hello World enter driver!!!\n");
}


static void hello_exit(void)
{
	printk(KERN_EMERG "[MODULE]Hello World exit driver!!!\n");
	return;	
}


//��ʼ��ģ����غ���
module_init(hello_init);

//ж��ģ�麯��
module_exit(hello_exit);