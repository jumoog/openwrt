#ifndef __CONFIG_H_752DPW
#define __CONFIG_H_752DPW

#define CONFIG_ARV752DPW	1
#define CONFIG_ARCADYAN		"ARV752DPW"

#define CONFIG_SYS_MAX_RAM	64*1024*1024
#define CONFIG_USE_DDR_PSC_64	1
#define	CONFIG_SYS_PROMPT	"ARV752DPW => "

#define CONFIG_RMII
#define CONFIG_RTL8306G_SWITCH	1
//#define CONFIG_EBU_GPIO		0x2
#define CONFIG_SWITCH_PORT1
#define CONFIG_SWITCH_PIN	3
//#define CONFIG_BUTTON_PORT0
//#define CONFIG_BUTTON_PIN	12

#include "arcadyan-common.h"

#endif
