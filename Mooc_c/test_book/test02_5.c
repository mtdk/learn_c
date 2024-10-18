/*
平方根求和：
输入一个正整数n，计算1+sqrt(2)+sqrt(3)+...sqrt(n)的值(保留2位小数)
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);

    if (n >= 2)
    {
        sum = 1.0;
        for (int i = 2; i <= n; i++)
        {
            sum += sqrt(i);
        }
        printf("%.2f\n", sum);
    }
    else
    {
        printf("Invalid Value!");
    }
    return 0;
}