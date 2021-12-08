#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");

static int param = 11;
module_param(param, int,  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

static int hello_init(void) {
    printk(KERN_ALERT "Hi!\n");
    return 0;
}

static void hello_exit(void) {
    printk(KERN_ALERT "Bye! ---  Parameter = %d\n", param);
}

module_init(hello_init);
module_exit(hello_exit);