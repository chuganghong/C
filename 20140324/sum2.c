#include <stdio.h>
#define N 50
int sum(int a[],int n);
int main()
{
    int i,n,a[N];
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i] = i +1;
    }
    printf("%d--%d",n,sum(a,n));
    return 0;
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
