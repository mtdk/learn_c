/*
求给定序列前n项和(1-1/4+1/7-1/10+...)：
输入一个正整数n，计算序列1-1/4+1/7-1/10+1/13-1/16+...的前n项之和
*/
#include <stdio.h>
int main(void)
{
    int n, i, flag;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);

    if (n > 0)
    {
        sum = 0;
        flag = 1;
        for (i = 1; i <= n; i = i + 3)
        {
            sum = sum + 1.0 / (i * flag);
            printf("%f = %f + %d / (%d * %d)\n", sum, sum, 1, i, flag);
            flag = -flag;
        }
        printf("%f\n", sum);
    }
    else
    {
        printf("Invalid value!");
    }

    return 0;
}