/* two_func.c -- ��һ���ļ���ʹ���������� */
#include <stdio.h>
void butler(void);  /* ISO/ANSI C����ԭ�� */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)   /* ��������Ŀ�ʼ */
{
    printf("You rang,sir?\n");
}
