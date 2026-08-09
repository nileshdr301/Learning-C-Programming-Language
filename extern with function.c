#include<stdio.h>

int flag = 1;

void check();

int main()
{
    check();

    flag = 0;

    check();

    return 0;
}

void check()
{
    extern int flag;

    if(flag == 1)
    {
        printf("Flag is ON\n");
    }
    else
    {
        printf("Flag is OFF\n");
    }
}
