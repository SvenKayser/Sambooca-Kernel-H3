// procnode to bypass patched vsync behaviour

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fb.h>
#include <linux/memblock.h>
#include <linux/proc_fs.h>
#include <linux/uaccess.h>
#include "legacy_vsync_proc.h"

