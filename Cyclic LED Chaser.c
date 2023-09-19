#include <reg51.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
uchar led;
uchar ta[] = {0xfe, 0xfd, 0xfb, 0xf7, 0xef, 0xdf, 0xbf, 0x7f, 0x7f, 0xbf, 0xdf, 0xef, 0xf7, 0xfb, 0xfd, 0xfe};
void delay(uint i)
{
    uchar t;
    while (i--)
    {
        for (t = 0; t < 120; t++);
    }
}

void main()
{
    uchar i;
    P1 = 0x00; 

    while (1)
    {
        for (i = 0; i < 16; i++)
        {
            P1 = ta[i]; 
            delay(500);
        }
    }
}
