//swap1.c -- ���������ĵ�һ���汾
#include <stdio.h>
void interchange(int u,int v);
int main(void)
{
    int x = 5,y = 10;
    printf("Originally x = %d and y = %d.\n",x,y);
    printf("&x = %p,&y = %p\n",&x,&y);
    interchange(x,y);
    printf("Now x = %d and y = %d.\n",x,y);
    printf("&x = %p,&y = %p\n",&x,&y);
    return 0;
}

void interchange(int u,int v)
{
    int tmp;

    tmp = u;
    u = v;
    v = tmp;

    printf("In interchange(),&u = %p,&v = %p\n",&u,&v);
}
