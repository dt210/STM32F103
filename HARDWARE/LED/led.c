#include "led.h"

//******************************/
//�������ƣ�LED��ʼ������
//��ڲ�������
//�� �� ֵ����
//��    ע��PB5��PE5Ϊ�������
//******************************/
void LED_Init(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;	//����һ�����ڳ�ʼ��IO�Ľṹ�����
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOE, ENABLE);	//ʹ��IO��˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;				 //ѡ��˿�5
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //�����趨������ʼ��GPIOB.5
 GPIO_SetBits(GPIOB,GPIO_Pin_5);						 //PB.5 �����

 GPIO_Init(GPIOE, &GPIO_InitStructure);	  				 //��ʼ��GPIOE.5����������Ķ�ʡȥ��д
 GPIO_SetBits(GPIOE,GPIO_Pin_5); 						 //PE.5 ����� 
}

