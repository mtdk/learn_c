/*
用格雷戈里公式求给定精度的圆周率值。
要求精确到最后一项的绝对值小于给定精度eps。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int denominator, flag, i;
    double eps, item, pi;
    printf("Enter eps:");
    scanf("%lf", &eps);
    i = 1;
    flag = 1;
    denominator = 1;
    item = 1.0;
    pi = 0;
    while (fabs(item) >= eps)
    {
        pi = pi + item;
        flag = -flag;
        i++;
        denominator += 2;
        item = flag * 1.0 / denominator;
    }
    pi = pi + item;
    pi = pi * 4;
    printf("pi=%.4f\n", pi);
    printf("i=%d\n", i);
    return 0;
}