/*
统计素数并求和。
输入2个正整数m和n(1<=m<=n<=500)，统计并输出m和n之间的素数个数以及这些素数的和。
素数就是只能被1和自身整除的正整数，1不是素数，2是素数。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int k, i, n, m, count, sum, sum1, limit, flag;

    printf("Enter m n:");
    scanf("%d%d", &m, &n);
    count = sum = sum1 = 0;
    if (m < 1 || n > 500 || m > n)
    {
        printf("Invalid Value!\n");
    }
    else
    {
        for (k = m; k <= n; k++)
        {
            if (k <= 1)
            {
                flag = 0;
            }
            else if (k == 2)
            {
                flag = 1;
            }
            else
            {
                flag = 1;
                limit = sqrt(k) + 1;
                for (i = 2; i <= limit; i++)
                {
                    if (k % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                count++;
                sum = sum + k;
            }
        }
        printf("count=%d sum=%d\n", count, sum);
    }

    return 0;
}