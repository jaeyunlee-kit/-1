#include <stdio.h>

int main()
{
    int a, b = 0, i;

    scanf("%d", &a);

    for (i = a; i % 3 != 0 || i >= 5; i = i - 5)
    {
        if (i == 12 || i == 9 || i == 6)
        {
            break;
        }
        b++;
    }

    if (i == 0)
    {
        printf("%d", b);
    }

    else if (i % 3 == 0 && i >= 0)
    {
        b = b + (i / 3);
        printf("%d", b);
    }

    else
    {
        printf("-1");
    }
}