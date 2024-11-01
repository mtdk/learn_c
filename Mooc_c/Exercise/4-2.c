/*
展开式求和。
输入一个实数x，计算并输出下式的和，
知道最后一项的绝对值小于0.00001，
计算结果保留4为小数。要求定义和调用函数fact(n)，
计算n的阶乘，可以调用pow()函数求幂。
*/
#include <stdio.h>
#include <math.h>
double fact(int n);
int main(void)
{
    int x;
    double sum, denominator;
    sum = denominator = 0;
    printf("Enter x:");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        denominator = fact(i);
        printf("%.2f\n", denominator);
    }
}

double fact(int n)
{
    double result = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}