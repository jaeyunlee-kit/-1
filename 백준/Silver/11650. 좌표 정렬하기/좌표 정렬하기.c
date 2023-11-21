#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct array
{
	int x;
	int y;
}array;

int compare(const void* x, const void* y)
{
	if (*(int*)x > *(int*)y)
		return 1;
	else if (*(int*)x < *(int*)y)
		return -1;
	else
		return 0;
}

int cmp(const void* a, const void* b)
{
	array na = *(array*)a;
	array nb = *(array*)b;
	if (na.x == nb.x)
		return na.y - nb.y;
	else
		return na.x - nb.x;
}

int main()
{
	int a;
	

	scanf("%d", &a);
	array* arr = (array*)malloc(sizeof(array) * a);

	for (int i = 0; i < a ; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}


	qsort(arr, a, sizeof(array), cmp);


	for (int is = 0; is < a; is++)
	{
		printf("%d %d\n", arr[is].x, arr[is].y);
	}

	free(arr);
}