#ifndef __IPC_ALIAS__
#define __IPC_ALIAS__

#include "zlog.h"

//别名的定义
typedef unsigned char uint8;
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;

//zai ipc_hk.c li chushihua , xiangdayin log de wenjian keyi zhijie baohan ci .hwenjian
extern zlog_category_t *zc; //需打印log的程序需包含该头文件

#endif

