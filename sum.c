#include <stdio.h>
#define N 50
int sum(int a[],int n);
void main()
{
    int i,n,a[N];
    printf("请输入一个50以内的自然数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i] = i+1;
    }
    printf("前%d个自然数的和为：%d\n",n,sum(a,n));
}

int sum(int a[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return (a[n-1] + sum(a,n-1));
    }
}
