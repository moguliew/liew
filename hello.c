#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init xxx_init(void)//安装的时候出现的功能函数
{

	return 0;
}

static void __exit xxx_exit(void)//退出的功能函数
{
	
}

module_init(xxx_init); //---回调函数
module_exit(xxx_exit); //模块卸载的时候，自动运行参数指向的函数
MODULE_LICENSE("Dual BSD/GPL");//指定当前模块遵循的协议，通常都写
MODULE_AUTHOR("SUN");//当前模块的作者，可写可不写
MODULE_DESCRIPTION("STUDY_MODULE");//当前模块的描述信息，可写可不写
