#pragma warning(disable: 4996)
#include<stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	scanf("%s", a);
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] != 0) {
			if (65 <= (int)a[i] && (int)a[i] <=90)
			{
				a[i] = a[i] + 32;
			}
			else
				a[i] = a[i] - 32;
		}
	}
	printf("%s", a);
}