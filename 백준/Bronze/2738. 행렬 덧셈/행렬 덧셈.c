#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int A[100][100];
    int B[100][100];

    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = 0; i < a; i++)
    {
        for (int is = 0; is < b; is++)
        {
            scanf("%d", &A[i][is]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int is = 0; is < b; is++)
        {
            scanf("%d", &B[i][is]);
        }
    }


    for (int i = 0; i < a; i++)
    {
        for (int is = 0; is < b; is++)
        {
            printf("%d ", A[i][is]+B[i][is]);
        }
        printf("\n");
    }
}