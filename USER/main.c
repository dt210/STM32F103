#include "sys.h"
#include "delay.h"
#include "led.h"
#include "beep.h"
#include "key.h"

int main(void)
{
	u8 key=0;	
	
	delay_init();	    	//��ʼ����ʱ����	  
	LED_Init();		  		//��ʼ��LED
	BEEP_Init();         	//��ʼ��������
	KEY_Init();         	//��ʼ������
	while(1)
	{
 		key=KEY_Scan(0);	//�õ���ֵ
	   	if(key)
		{						   
			switch(key)
			{				 
				case WKUP_PRES:	//���Ʒ�����
					LED0=!LED0;
					break; 
				case KEY1_PRES:	//����LED1��ת	 
					LED1=!LED1;
					break;
				case KEY0_PRES:	//ͬʱ����LED0,LED1��ת 
					
					LED1=!LED1;
					break;
			}
		}else delay_ms(10); 
	}	 
}

