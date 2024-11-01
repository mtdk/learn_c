/*
素数问题。
输入2个正整数m和n(1<=m<=n<=500)，输出m到n之间的全部素数，
每行输出10个。
素数就是只能被1和自身整除的正整数，1不是素数，2是素数。*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int count, i, k, flag, limit, m, n;
    printf("Enter m n:");
    scanf("%d%d", &m, &n);
    count = 0;
    if (m < 1 || n > 500 || m > n)
    {
        printf("Invalid.\n");
    }
    else
    {
        for (k = m; k < n; k++)
        {
            if (k == 1)
            { // 小于1的数不是素数
                flag = 0;
            }
            else if (k == 2)
            {
                flag = 1; // 2是素数
            }
            else
            {
                flag = 1; // 假设k是素数
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
                printf("%6d", k);
                count++;
                if (count % 10 == 0)
                {
                    printf(" \n");
                }
            }
        }
    }
    printf("\n");
    return 0;
}