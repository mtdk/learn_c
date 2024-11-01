/*
斐波那契数列问题。
输入正整数n(1<=n<=46)，输出斐波那契(Fibonacci)数列的前n项：
1，1，2，3，5，8，13，...，每行输出5个。
斐波那契数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。
*/
#include <stdio.h>
int main(void)
{
    int i, n, x1, x2, x;

    printf("Enter n:");
    scanf("%d", &n);
    if (n < 1 || n > 46)
    {
        printf("Invalid.\n");
    }
    else if (n == 1)
    {
        printf("%10d", 1);
    }
    else
    {
        x1 = 1;
        x2 = 1;
        printf("%10d%10d", x1, x2);
        for (i = 3; i <= n; i++)
        {
            x = x1 + x2;
            printf("%10d", x);
            x1 = x2;
            x2 = x;
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}