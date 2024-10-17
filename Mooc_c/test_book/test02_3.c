/*
序列求和：输入两个正整数m和n(0<m<=n)，求∑(i²+1/i)，结果保留6位小数。
*/
#include <stdio.h>
int main(void)
{

    int m, n, i;
    double sum;
    printf("Enter m n:");
    scanf("%d %d", &m, &n);

    if (m > 0 && m <= n)
    {
        sum = 0;
        for (i = m; i <= n; i++)
        {
            sum = sum + i * i + 1.0 / i;
        }
        printf("%.6f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}