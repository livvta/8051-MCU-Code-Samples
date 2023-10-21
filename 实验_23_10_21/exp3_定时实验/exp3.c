#include<reg52.h>
#define uchar unsigned char
uchar i=100;
void main()
{
	TMOD=0x01;
	TH0=0xee;
	TL0=0x00;
	P2=0x00;
	EA=1;
	ET0=1;
	TR0=1;
	while(1)
	{;}
}
void timer0 () interrupt 1
{
	TH0=0xee;
	TL0=0x00;
	i++;
	if(i>=200)
	{
		P2=~P2;
		i=0;
	}
}