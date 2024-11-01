/*
求给定序列前n项和(1!+2!+...)：
输入一个正整数n，求e=1!+2!+3!+...+n!的值。
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
    sum = fact(n);
    printf("sum=%.2f\n", sum);

    return 0;
}

double fact(int n)
{
    int i, j;
    double tmp, result;

    result = 0;
    for (i = 1; i <= n; i++)
    {
        tmp = 1;
        for (j = 1; j <= i; j++)
        {
            printf("j=%d ", j);
            tmp = tmp * j;
            printf("tmp=%.2f\n", tmp);
        }
        result += tmp;
        printf("result=%.2f\n", result);
    }

    return result;
}