/*
平方根求和：输入一个正整数n，计算1+√2+√3+...√n的值(保留2位小数)。
可包含头文件math.h，并调用sqrt()函数求平方根。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    double sum;
    sum = 1.0;
    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 2; i <= n; i++)
        {
            sum = sum + sqrt(i);
        }
        printf("sum=%.2f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }
}