#include "sys.h"
#include "delay.h"
#include "led.h"
#include "beep.h"
#include "key.h"

int main(void)
{
	u8 key=0;	
	
	delay_init();	    	//初始化延时函数	  
	LED_Init();				//初始化LED
	BEEP_Init();         	//初始化蜂鸣器
	KEY_Init();         	//初始化按键
	while(1)
	{
 		key=KEY_Scan(0);	//得到键值
	   	if(key)
		{						   
			switch(key)
			{				 
				case WKUP_PRES:	//控制蜂鸣器
					LED0=!LED0;
					break; 
				case KEY1_PRES:	//控制LED1翻转	 
					LED1=!LED1;
					break;
				case KEY0_PRES:	//同时控制LED0,LED1翻转 
					
					LED1=!LED1;
					break;
			}
		}else delay_ms(10); 
	}	 
}

