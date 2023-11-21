#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* x, const void* y)
{
	if (*(int*)x > *(int*)y)
		return 1;
	else if (*(int*)x < *(int*)y)
		return -1;
	else
		return 0;
}

int main()
{
	int a, b;
	
	scanf("%d", &a);
	int* arr = malloc(sizeof(int) * a);

	for (int i = 0; i < a ; i++)
	{
		scanf("%d", &b);
		*(arr + i) = b;
	}

	qsort(arr, a, sizeof(int), compare);


	for (int is = 0; is < a; is++)
	{
		printf("%d\n", *(arr + is));
	}

	free(arr);
}