#include <reg51.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
uchar led;
void delay(uint i)
{
    uchar t;
    while(i--)
    {
        for(t=0;t<120;t++);
    }
}

void main()
{
    while(1)
    {
			 uchar temp;
				 P1 =0xff;
			   temp = P1&0xf0;
				 temp = temp >>4;
				 P1 = temp;
				 delay(500);
			 
    }
}