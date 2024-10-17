/*
求交错序列前n项和：
输入一个正整数n，计算交错序列1-2/3+3/5-4/7+5/9-6/11+...的前n项之和。
*/
#include <stdio.h>
int main(void)
{

    int n, i;
    int flag, denominator;
    double sum, tmp;

    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {
        flag = 1;
        denominator = 1;
        tmp = 1;
        sum = 0;

        for (i = 1; i <= n; i++)
        {
            sum = sum + tmp;
            printf("%f = %f + %f\n", sum, sum, tmp);
            flag = -flag;
            denominator = denominator + 2;
            tmp = flag * i / denominator;
            printf("%f = %d * %d / %d\n", tmp, flag, i, denominator);
        }
        printf("sum=%f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }
    return 0;
}