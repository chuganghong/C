#include <stdio.h>
void good(void);
void deny(void);
int main(void)
{
    int i;
    for(i=0;i<3;i++)
    {
        good();
    }
    deny();
    return 0;
}

void good(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
