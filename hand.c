#include <stdio.h>
void main()
{
    int q = 5;
    int *qPtr;
    qPtr = &q;
    printf("q的地址是：%p\nqPtr中的内容是：%p\n",&q,qPtr);
    printf("q的值是：%d\n*qPtr的值是：%d\n",q,*qPtr);

}
