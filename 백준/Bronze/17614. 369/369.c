#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	int a;
	int count = 0;
	char str[256];

	scanf("%d", &N);

	for (int i = 1; i <=N; i++)
	{
		a = i;
		sprintf(str, "%1d", a);
		for (int is = 0; str[is] != '\0'; is++)
		{
			if (str[is] == '3' || str[is] == '6' || str[is] == '9')
				count++;
		}
	}

	printf("%d", count);
}