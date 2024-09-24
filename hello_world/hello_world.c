#include <linux/module.h>  // Needed for all kernel modules
#include <linux/kernel.h>  // Needed for KERN_INFO
#include <linux/init.h>    // Needed for the macros

// Function called when the module is loaded
static int __init hello_init(void) {
    printk(KERN_ALERT "Hello, world\n");
    return 0;
}

// Function called when the module is removed
static void __exit hello_exit(void) {
    printk(KERN_ALERT "Goodbye cruel world\n");
}

// Register module entry and exit points
module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple hello world kernel module");
