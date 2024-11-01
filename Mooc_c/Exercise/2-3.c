/*
序列求和：
输入两个正整数m和n(0<m<=n),求i平方加1除以i的累加直到n。
*/
#include <stdio.h>
int main(void)
{
    int m, n;
    double sum = 0;
    int i;
    scanf("%d%d", &m, &n);
    if (m > 0 && n > 0)
    {
        for (i = m; i <= n; i++)
        {
            sum += i * i + 1 / i;
        }
        printf("sum=%.6lf\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}