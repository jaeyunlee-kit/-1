#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N*2 - 1; i++)
	{
		if (i <= N)
			for (int is = 1; is <= i; is++)
			{
				printf("*");
			}

		else if(i > N)
			for (int is = i-N; is < N; is++)
			{
				printf("*");
			}

		printf("\n");
	}
}