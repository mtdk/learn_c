/*
求阶乘问题：输入一个正整数n，输出n!。
*/
#include <stdio.h>
int main(void)
{
    int n;
    int factorial(int n);

    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}

int factorial(int n)
{
    int i, fact;

    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}