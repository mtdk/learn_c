#include <stdio.h>
int main()
{
    // int i;
    // double s = 0;
    // for (i = 1; i < 4; i++)
    // {
    //     s = s + 1.0 / i;
    //     printf("i=%d#s=%.3f\n", i, s);
    // }
    // printf("i=%d#s=%.3f\n", i, s);

    // int m, n;
    // scanf("%d%d", &m, &n);
    // while (m != n)
    // {
    //     while (m > n)
    //         m = m - n;
    //     while (n > m)
    //         n = n - m;
    // }

    // printf("m=%d\n", m);

    // int i;
    // for (i = 1; i < 6; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("#");
    //         continue;
    //     }
    //     printf("*");
    // }

    // int i, s = 0;
    // for (i = 1; i <= 10; i = i + 3)
    // {
    //     s = s + i;
    // }
    // printf("i=%d s=%d\n", i, s);

    // int i;
    // for (i = 14; i > 1; i /= 3)
    // {
    //     printf("%d#", i);
    // }

    // int num = 0, s1 = 0;
    // while (num <= 2)
    // {
    //     num++;
    //     s1 = s1 + num;
    // }
    // printf("s1=%d\n", s1);

    // int num = 0, s2 = 0;
    // while (num <= 2)
    // {
    //     s2 = s2 + num;
    //     num++;
    // }
    // printf("s2=%d\n", s2);

    // int i, s = 0, t = 0;
    // for (i = 1; i <= 5; i++)
    // {
    //     t = t * 10 + i;
    //     s = s + t;
    // }
    // printf("s=%d\n", s);

    // int num = 0;
    // while (num < 6)
    // {
    //     num++;
    //     if (num == 3)
    //         continue;
    //     printf("%d#", num);
    // }

    // char ch;
    // int i;
    // for (i = 1; i <= 6; i++)
    // {
    //     ch = getchar();
    //     if (ch >= 'a' && ch <= 'z')
    //         ch = (ch + 5 - 'a') % 26 + 'a';
    //     else if (ch >= '0' && ch <= '9')
    //         ch = (ch + 2 - '0') % 20 + '0';
    //     putchar(ch);
    // }

    // int i, j, k = 0, m = 0;
    // for (i = 0; i < 2; i++)
    // {
    //     k = 0;
    //     for (j = 0; j < 3; j++)
    //         k++;
    //     m = m + k;
    // }
    // printf("k=%d, m=%d\n", k, m);

    // int i, j, n;
    // scanf("%d", &n);
    // for (i = n - 1; i >= 0; i--)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         printf("%4d", i * 4 + j);
    //     }
    //     printf("\n");
    // }

    // int i, j, n;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     for (j=0;j<n-i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for (j=n-i;j<n+i-1;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int digit, number, pow, t_number;
    scanf("%d", &number);
    t_number = number;
    pow = 1;
    while (t_number >= 10)
    {
        pow = pow * 10;
        t_number = t_number / 10;
    }
    while (pow >= 1)
    {
        digit = number / pow;   // 获取当前位数字
        number = number % pow;  // 去掉当前位数字
        pow = pow / 10;         // 移动到下一位
        printf("%d ", digit);   // 输出当前位数字
    }

    return 0;
}
