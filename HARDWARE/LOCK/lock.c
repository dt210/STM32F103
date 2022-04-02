#include "lock.h"
#include "rs485.h"	 
#include "delay.h"
#include "sys.h"	

u8 rs485bufk1[5]={0x8A,0x01,0x01,0x11,0x9B}; 
	u8 rs485bufk2[5]={0x9A,0x01,0x02,0x11,0x88}; 
	u8 rs485bufk3[5]={0x9A,0x01,0x03,0x11,0x89}; 
	u8 rs485bufk4[5]={0x9A,0x01,0x04,0x11,0x8E}; 
	u8 rs485bufk5[5]={0x9A,0x01,0x1A,0x11,0x90};
  u8 rs485bufk6[5]={0x9A,0x01,0x1B,0x11,0x91}; 
	u8 rs485bufk7[5]={0x9A,0x01,0x1C,0x11,0x96}; 
	u8 rs485bufk8[5]={0x9A,0x01,0x1D,0x11,0x97}; 
	u8 rs485bufk9[5]={0x9A,0x01,0x1E,0x11,0x94}; 
 u8 rs485bufk10[5]={0x9A,0x01,0x20,0x11,0xAA}; 
 
 // u8 rs485bufg1[5]={0x8B,0x01,0x01,0x11,0x9B}; 
	u8 rs485bufg2[5]={0x9B,0x01,0x02,0x11,0x89}; 
	u8 rs485bufg3[5]={0x9B,0x01,0x03,0x11,0x88}; 
	u8 rs485bufg4[5]={0x9B,0x01,0x04,0x11,0x8F}; 
	u8 rs485bufg5[5]={0x9B,0x01,0x1A,0x11,0x91};
	u8 rs485bufg6[5]={0x9B,0x01,0x1B,0x11,0x90}; 		
	u8 rs485bufg7[5]={0x9B,0x01,0x1C,0x11,0x97}; 
	u8 rs485bufg8[5]={0x9B,0x01,0x1D,0x11,0x96}; 
 	u8 rs485bufg9[5]={0x9B,0x01,0x1E,0x11,0x95}; 
 u8 rs485bufg10[5]={0x9B,0x01,0x20,0x11,0xAB}; 
 
 u8 rs485bufcheak[5]={0x80,0x01,0x01,0x33,0xB3}; 
void k1()
 {
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 	
 }
 
  void k2()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 
	}
	
  void k3()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
	}
	
  void k4()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
	}
	
  void k5()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
	}
	
  void k6()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk6,5);//发送5个字节 	
	}
  
	void k7()
	{
	RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk7,5);//发送5个字节 	
	}
  
	void k8()
	{
		
			RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk8,5);//发送5个字节 	
	}
  
	void k9()
	{
		RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk8,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk9,5);//发送5个字节 	
	}
  
	void k10()
	{
		RS485_Send_Data(rs485bufk1,5);//发送5个字节 		
			delay_ms(450);
			RS485_Send_Data(rs485bufk2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk4,5);//发送5个字节 	 
			delay_ms(450);
			RS485_Send_Data(rs485bufk5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk8,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk9,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufk10,5);//发送5个字节 	

	}
 
	void g2() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
	}

	
	void g3() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
	}

	void g4() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
	}

	void g5() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
	}

	void g6() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg6,5);//发送5个字节 	
			delay_ms(450);	
	}

	void g7() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg7,5);//发送5个字节 	
			delay_ms(450);
	}

	void g8() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg8,5);//发送5个字节 	
			delay_ms(450);
	}

	void g9() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg8,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg9,5);//发送5个字节 	
			delay_ms(450);
	}

	void g10() 
	{
	    RS485_Send_Data(rs485bufg2,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg3,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg4,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg5,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg6,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg7,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg8,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg9,5);//发送5个字节 	
			delay_ms(450);
			RS485_Send_Data(rs485bufg10,5);//发送5个字节 	
	}


