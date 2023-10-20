#include <reg51.h>
#include <stdio.h>
sbit P1_0 = 0x90;
unsigned char nSendByte;
void delay (unsigned int i)
{
	unsigned char j;
	for(;i>0;i--)
	for(j=0;j<125;j++)
	    ;
}
void main( )
{
	SCON = 0x00;
	EA = 1;
	ES = 1;
	nSendByte = 1;
	SBUF = nSendByte;
  P1_0 = 0;
	while(1)
	{
		;
	}
}
void Serial_Port() interrupt 4 using 0
{
	if(T1)
	{
		P1_0 = 1;
		SBUF = nSendByte;
		delay(500);
		P1_0 = 0;
		nSendByte = nSendByte<<1;
		if(nSendByte == 0)nSendByte = 1;

		SBUF = nSendByte;
	}
	T1 = 0;
	RI = 0;
}
