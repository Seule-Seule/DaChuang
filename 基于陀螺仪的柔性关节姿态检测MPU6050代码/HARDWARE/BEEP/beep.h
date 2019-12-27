#ifndef __BEEP_H
#define __BEEP_H	 
#include "sys.h"

/*  蜂鸣器时钟端口、引脚定义 */
#define BEEP_PORT 			GPIOB   
#define BEEP_PIN 			GPIO_Pin_5
#define BEEP_PORT_RCC		RCC_APB2Periph_GPIOB

#define beep PBout(5)

void BEEP_Init(void);
void Sound(u16 frq);
		 				    
#endif
