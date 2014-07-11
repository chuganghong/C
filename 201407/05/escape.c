/*使用转义字符*/
#include <stdio.h>
int main(void)
{
    float salary;
    int i;
    for(i=0;i<12;i++)
    {
        printf("\a");
    }
    printf("\aEnter your desired monthly salary: ");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12.0);
    printf("\rGee!\n");
    return 0;
}
