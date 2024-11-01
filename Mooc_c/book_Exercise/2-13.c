/*
求给定序列前n项和(1+1/2+1/3+....)：
输入一个正整数n，计算序列1+1/2+1/3+...的前n项之和。
*/
#include <stdio.h>
int main(void)
{
    int i, n;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);

    if (n > 0)
    {
        sum = 0;

        for (i = 1; i <= n; i++)
        {
            sum = sum + 1.0 / i;
        }

        printf("sum=%f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}