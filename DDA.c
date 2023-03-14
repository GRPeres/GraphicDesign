#include <stdio.h>
#include <math.h>

int main()
{
    int X2 = 10;
    int Y2 = 7;
    int X1 = 0;
    int Y1 = 0;
    float step = fmax(fabs(X2 - X1),fabs(Y2 - Y1));
    float Xinc = (X2 - X1)/step;
    float Yinc = (Y2 - Y1)/step;
    printf("%f \n",Xinc);
    printf("%f \n \n ",Yinc);
    float Xf = X1;
    float Yf = Y1;
    if(Xinc == 1){
        for(int i = 0; i < fabs(X2 - X1);i++){
            Xf += Xinc;
            Yf += Yinc;
            printf("%f \n",Xf);
            printf("%f  \n \n",Yf);
        }
    }
    if(Yinc == 1){
        for(int i = 0; i < fabs(Y2 - Y1);i++){
            Xf += Xinc;
            Yf += Yinc;
            printf("%f \n",Xf);
            printf("%f  \n \n",Yf);
        }
    }
    return 0;
}
