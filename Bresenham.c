#include <stdio.h>

void bresenham(int x1, int y1, int x2, int y2)
{
 int dx,dy,p,p2,xy2,x,y,xf;
 dx = x2-x1;
 dy = y2-y1;
 p = 2 * dy - dx;
 p2 = 2 * dy; //incrementa E
 xy2 = 2 * (dy-dx); //incrementa NE
 if (x1>x2)
 {x = x2; y = y2; xf = x1; }
 else
 {x = x1; y = y1; xf = x2; }
 printf("(%d,%d)\n p=%d \n p = p + 2dy - 2dx \n",x,y,p);
 while (x<xf)
 {
 x++;
 if (p<0)
 p += p2;
 else
 {
 y++;
 p += xy2;
 }
  printf("(%d,%d)\n p=%d \n p = p + 2dy\n",x,y,p);
 }
}
int main()
{
    bresenham(20,10,30,18);
    return 0;
}
