#include "reg51.h"		
#include "delay.h"		
#include "lcd.h"			//header file for interfacing 16x2 charactor LCD
//complete forward 0101
//completebackwards 1010
//
void main()
{
	P2=0xff; //Motor port
	P1=0x00; //sensor port

 	LCD_INIT();					//initialization of 16x2 charactor LCD
 	LCD_CMD(0x80);					//command to move the cursor position to first row first column of the LCD
 	LCD_STRING("Zeusville Dexter");		//to display a string in LCD
 	LCD_CMD(0xC0);				    	//command to move the cursor position to second row first column of the LCD
 	LCD_STRING("Avoid Obstacle");	
while(1)
{


  //P2=0x50;
if(p11==1 && p12==1)
{
     
      	P2=0xA0;//				//Move backwards
	 
	 	
	delay(500);
	  
	  
	  P2=0x60;				// left rotate
	 		
	  delay(500);
	   //p03=1;
	  
	  }
	  else if(p12==1 && p11==0)   //left is detected
	  {
	  
	  P2=0xA0;				//Move backword
	  delay(200);
	

	  P2=0x90;
	  delay(300);
	  
	  }
	  else if(p12==0 && p11==1)  // right sensor
	  {
	 
	  P2=0xA0;				//Move backword
	  delay(200);
	

	  P2=0x60;
	  delay(300);
	  LCD_CLEAR();
	  }
	  
	  else
	  {
	  
	  P2=0x50;
	 
	  }
	  }
	  }