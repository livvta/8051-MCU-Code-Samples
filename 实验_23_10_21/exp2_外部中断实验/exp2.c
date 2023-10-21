#include <reg51.h>
#define uchar unsigned char

void Delay(unsigned int i)
{
    unsigned int j;
    for (; i > 0; i--)
    {
        for (j = 0; j < 333; j++)
        {
            ;
        }
    }
}

void main()
{
    EA = 1;
    EX1 = 1;
    IT1 = 1;
    while (1)
    {
        P2 = 0;
    }
}

void int1() interrupt 2 using 0
{
    uchar m;
    EX1 = 0;
    for (m = 0; m < 5; m++)
    {
        P2 = 0xFF;
        Delay(400);
        P2 = 0x00;
        Delay(400);
    }
    EX1 = 1;
}

