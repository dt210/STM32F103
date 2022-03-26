#include "led.h"

//******************************/
//函数名称：LED初始化函数
//入口参数：空
//返 回 值：空
//备    注：PB5和PE5为推挽输出
//******************************/
void LED_Init(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;	//定义一个用于初始化IO的结构体变量
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOE, ENABLE);	//使能IO组端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;				 //选择端口5
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //根据设定参数初始化GPIOB.5
 GPIO_SetBits(GPIOB,GPIO_Pin_5);						 //PB.5 输出高

 GPIO_Init(GPIOE, &GPIO_InitStructure);	  				 //初始化GPIOE.5，参数不需改动省去不写
 GPIO_SetBits(GPIOE,GPIO_Pin_5); 						 //PE.5 输出高 
}

