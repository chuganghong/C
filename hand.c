#include <stdio.h>
void main()
{
    int q = 5;
    int *qPtr;
    qPtr = &q;
    printf("q�ĵ�ַ�ǣ�%p\nqPtr�е������ǣ�%p\n",&q,qPtr);
    printf("q��ֵ�ǣ�%d\n*qPtr��ֵ�ǣ�%d\n",q,*qPtr);

}
