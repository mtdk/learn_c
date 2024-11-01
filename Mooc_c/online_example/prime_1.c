/*
输出前50个素数
*/
#include <stdio.h>
int main(void)
{
    int x;
    // scanf("%d",&x);
    x = 2;
    int cnt = 0;

    // for (x = 2; x < 100; x++)
    while (cnt < 50)
    {
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
        if (isPrime == 1)
        {
            printf("%d ", x);
            cnt++;
        }
        x++;
    }
    printf("\n");

    return 0;
}