/*
求交错序列前n项和：
输入一个正整数n，计算交错序列1-2/3+3/5-4/7+5/9-6/11+...的前n项之和。
*/
#include <stdio.h>
int main(void)
{

    int n;
    int flag = -1;
    int denom = 1;
    double tmp = 1;
    double sum = -1;

    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {

        for (int i = 1; i <= n; i++)
        {
            printf("sum = %.2f i = %d denom = %d\n", sum, i, denom);
            tmp = flag * i * 1.0 / denom;
            // printf("tmp = %d * %d / %d\n", flag, i, denom);
            sum = sum + tmp;
            printf("sum = %.2f + %.2f\n", sum, tmp);
            flag = -flag;
            denom = denom + 2;
        }
        printf("\n");
        printf("sum=%f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }
    return 0;
}