/*
输入一个正整数，求 sum=1+2+3+4... +n 的和
*/
#include <stdio.h>
int main(void)
{
    int i, n, sum;

    printf("Enter n:");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    // 输出累加和
    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}