#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a;
    for(int is = 1; is <= a; is++)
    {
        for(int i = 2; i <= b; i++)
        {
            printf(" ");
        }
        
        for(int i = a; i >= b; i--)
        {
            printf("*");
        }
        printf("\n");
        b--;
    }
}