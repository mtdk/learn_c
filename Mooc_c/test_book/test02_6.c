/*
求给定序列前n项和(1!+2!+...)：
输入一个正整数n，求e=1!+2!+3!+...n!的值。
要求定义和调用函数fact(n)计算n!，函数类型是double。
*/
#include <stdio.h>
double fact(int n);
int main(void)
{
    int n;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);

    if (n > 0)
    {
        sum = fact(n);
        printf("%.2f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }
}

double fact(int n)
{
    double result = 0.0;
    for (int i = 1; i <= n; i++)
    {
        double tmp = 1;
        for (int j = 1; j <= i; j++)
        {
            tmp *= j;
        }
        result += tmp;
    }
    return result;
}