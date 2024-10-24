/*
使用函数求阶乘。
输入一个正整数n(n<=16)，
计算1!+2!+3!+...+n!。
要求定义和调用函数fact(n)计算n的阶乘，
如果n是非负数，则该函数返回n的阶乘，
否则返回0。
*/
#include <stdio.h>
double fact(int n);
int main(void)
{
    int i, n;
    double sum;
    sum = 0;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
    }

    printf("1!+2!+...+%d!=%.0f\n", n, sum);

    return 0;
}

double fact(int n)
{
    int i;
    double result;
    if (n < 0)
    {
        return 0;
    }
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}