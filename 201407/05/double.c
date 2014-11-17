#include <stdio.h>
#include <float.h>
int main(void)
{
    float f = 1.0/3.0;
    double d = 1.0/3.0;

    printf("%.4f\n",f);
    printf("%.12f\n",f);
    printf("%.16f\n",f);

    printf("%.4f\n",f);

    printf("%f\n",FLT_DIG);

    return 0;
}
