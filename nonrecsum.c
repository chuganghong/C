#include <stdio.h>
#define N 50
int sum(int n);
void main()
{
    int i,n;
    printf("请输入50以内的自然数：");
    scanf("%d",&n);
    printf("前%d个数的和为%d:",n,sum(n));
}

int sum(int n)
{
    int i = 1,sum=0;
    for(i;i<=n;i++)
    {
        sum +=i;
    }
    return sum;
}
