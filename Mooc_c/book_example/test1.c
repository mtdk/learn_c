#include <stdio.h>
int main(void)
{
    int x, i;

    x = 112337;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            break;
        }
    }
    printf("%d\n", i);

    if (i < x)
    {
        printf("不是素数\n");
    }
    else
    {
        printf("是素数\n");
    }

    return 0;
}