#include <stdio.h>
#define N 50
int sum(int n);
void main()
{
    int i,n;
    printf("������50���ڵ���Ȼ����");
    scanf("%d",&n);
    printf("ǰ%d�����ĺ�Ϊ%d:",n,sum(n));
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
