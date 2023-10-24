#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a;
    int ary[30];
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &a);
        ary[a-1] = 300;
    }

    for (int is = 0; is < 30; is++)
    {
        if (ary[is] != 300)
        {
            printf("%d\n", is+1);
        }
    }
}