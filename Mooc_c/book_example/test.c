#include <stdio.h>
int main()
{
    // printf("%d\n", 4 % 6);

    int x;
    // scanf("%d", &x);
    x = 112337;
    int i;
    int isPrime = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    printf("%d\n",i);
    // if (i < x)
    if(isPrime == 1)
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }

    return 0;
}