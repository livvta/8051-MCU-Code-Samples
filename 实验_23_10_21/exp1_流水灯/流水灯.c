#include <reg52.h>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
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
  P2=0xfe;
  while(1)
  {
   delay(500);
   P2=_crol_(P2,1);
  }
 }