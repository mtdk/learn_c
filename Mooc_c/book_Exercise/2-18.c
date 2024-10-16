/*
求组合数：根据下列公式可以算出从n个不同元素中取出m个元素(m<=n)的组合数。
输入两个正整数m和n(m<=n)，计算并输出组合数。
要求定义和调用函数fact(n)计算n!，函数类型是double。
*/
#include <stdio.h>
double fact(int n, int m);
int main()
{
    int n, m, i, j;
    double result;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter m:");
    scanf("%d", &m);

    if (m <= n)
    {
        result = fact(n, m);
        printf("%.2f\n", result);
    }
    else
    {
        printf("Invalid value!\n");
    }

    return 0;
}

double fact(int n, int m)
{
    int i;
    double fact_n, fact_m, fact_n_m, product;

    fact_n = 1, fact_m = 1, fact_n_m = 1;
    for (i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    for (i = 1; i <= m; i++)
    {
        fact_m = fact_m * i;
    }

    for (i = 1; i <= n - m; i++)
    {
        fact_n_m = fact_n_m * i;
    }

    product = fact_n / fact_m * fact_n_m;
    printf("%.0f = %.0f / %.0f * %.0f\n", product, fact_n, fact_m, fact_n_m);

    return product;
}