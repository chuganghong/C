/*以两种方式显示浮点值
 *第13行的输出结果，我不理解
 */
#include <stdio.h>
int main(void)
{
    float aboat = 3200.0;
    double abet = 2.14e9;
    long double dip = 5.32e-1;

    printf("%f can be written %e\n",aboat,aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%f can be written %e\n",dip,dip);
    return 0;
}
