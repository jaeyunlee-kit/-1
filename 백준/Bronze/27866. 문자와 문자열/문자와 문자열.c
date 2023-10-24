#pragma warning(disable: 4996)
#include<stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char a[1001];
	scanf("%s", a);
	scanf("%d", &i);
	printf("%c", a[i-1]);
}