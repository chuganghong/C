#include <stdio.h>
long factorial(int n);
void main()
{
    int  num,n;
    printf("Please input a number:");
    scanf("%d",&n);
    for(num=0;num<n;num++)
    {
        printf("%d!=%ld\n",num,factorial(num));
    }

}

long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
