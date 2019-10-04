#include "linux/module.h"
#include "linux/init.h"
#....测试git

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


//初始化模块加载函数
module_init(hello_init);

//卸载模块函数
module_exit(hello_exit);