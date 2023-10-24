#pragma warning(disable: 4996)
#include<stdio.h>
#include <string.h>

int main(void)
{
	float result = 0;
	char a[100];
	scanf("%s", a);

	if (a[0] == 'A')
	{
		result += 4;
	}

	else if (a[0] == 'B')
	{
		result += 3;
	}

	else if (a[0] == 'C')
	{
		result += 2;
	}

	else if (a[0] == 'D')
	{
		result += 1;
	}

	if (a[1] == '+')
	{
		result += 0.3;
	}

	else if (a[1] == '-')
	{
		result -= 0.3;
	}

	printf("%.1f", result);
	return 0;
}