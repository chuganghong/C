#include <stdio.h>
int sum(int a[],int n);
int main()
{
    int i,N=50,n;
    int a[N];
    printf("Please intput a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i] = i+1;
    }
    printf("%d",sum(a,n));
}

int sum(int a[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return a[n-1]+sum(a,n-1);
    }
}

