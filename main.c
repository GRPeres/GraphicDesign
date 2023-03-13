/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int X2 = 8;
    int Y2 = 7;
    int X1 = 7;
    int Y1 = -5;
    float step = fmax(fabs(X2 - X1),fabs(Y2 - Y1));
    float Xinc = (X2 - X1)/step;
    float Yinc = (Y2 - Y1)/step;
    printf("%f \n",Xinc);
    printf("%f",Yinc);
    return 0;
}
