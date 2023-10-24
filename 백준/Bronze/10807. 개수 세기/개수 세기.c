#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int* A = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int v;
    int count = 0;
    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (A[i] == v)
        {
            count++;
        }
    }
    printf("%d", count);
}