/*
求给定序列前n项和(1+1/3+1/5+...)：
输入一个正整数n，计算序列1+1/3+1/5+...的前n项之和
*/
#include <stdio.h>
int main(void)
{
    int n, i;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {
        sum = 0;
        for (i = 1; i <= n; i = i + 2)
        {
            sum = sum + 1.0 / i;
        }
        printf("%f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}