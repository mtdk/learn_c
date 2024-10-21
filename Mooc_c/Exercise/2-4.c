/*
求交错序列前n项和：
输入一个正整数n，计算交错序列1-2/3+3/5-4/7+5/9-6/11+...的前n项之和。
*/
#include <stdio.h>
int main(void)
{
    int n, i, flag, denominator;
    double tmp, sum;
    flag = 1;
    denominator = 1;
    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {
        tmp = 0;
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            printf("%d * %d / %d = %f\n", flag, i, denominator, (double)flag * i / denominator);
            tmp = (double)flag * i / denominator;
            printf("tmp=%f\n",tmp);
            sum += tmp;
            printf("sum=%f\n",sum);
            flag = -flag;
            denominator += 2;
        }
        printf("sum=%.2f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}