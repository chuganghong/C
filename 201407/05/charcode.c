/*��ʾһ���ַ��ı���ֵ
 *���ѭ���������룿
 */
#include <stdio.h>
void myfunc(void);

int main(void)
{
    char y;
    do
    {
        myfunc();
        printf("Are you wanto to continue?yes/no.\n");
        scanf("%c",&y);
    }while(&y=="yes");
    return 0;
}

void myfunc(void)
{
    char ch;
    printf("Please enter a character:\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);

}
