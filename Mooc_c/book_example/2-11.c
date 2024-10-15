/*
输入一个正整数n(n<=16)，生成一张阶乘表，
输出0!到n!的值。要求定义和调用函数fact(n)计算n!，
函数类型是double。
*/
#include <stdio.h>
double fact(int n);
int main(void)
{
    int i, n;

    printf("Enter n:");
    scanf("%d", &n);

    if (n <= 16)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d!=%.0f\n", i, fact(i));
        }
    }
    else
    {
        printf("Invalid value!\n");
    }

    return 0;
}

double fact(int n)
{
    int i;
    double product;

    product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }

    return product;
}