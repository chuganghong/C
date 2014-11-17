#include <stdio.h>
void good(void);
void deny(void);
int main(void)
{
    printf("%s","For he's a jolly good fellow!\n");
    good();
    good();
    deny();
}

void good()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny.\n");
}
