#include "sys.h"
#include "delay.h"
#include "led.h"
#include "beep.h"
#include "key.h"
#include "myusart.h"

int main(void)
{
	u8 key=0;	
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	delay_init();	    	//初始化延时函数	  
	LED_Init();				//初始化LED
	BEEP_Init();         	//初始化蜂鸣器
	KEY_Init();            	//初始化按键
	myuart_init(9600);		//串口初始化为9600
	while(1)
	{
 		key=KEY_Scan(0);	//得到键值
	   	if(key)
		{						   
			switch(key)
			{				 
				case WKUP_PRES:	//控制蜂鸣器
					printf("OKK");
					break; 
				case KEY1_PRES:	//控制LED1翻转	 
					LED1=!LED1;
					break;
				case KEY0_PRES:	//控制LED0翻转 
					
					LED0=!LED0;
					break;
			}
		}
	if (USART_RX_STA==0x8000)
	{
		USART_RX_STA=0;
		if(USART_RX_BUF[0]==0xAA)	LED0=!LED0;
	}
}		
			
		 
}

