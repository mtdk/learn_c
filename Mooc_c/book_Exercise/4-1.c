/*
用格雷戈里公式求给定精度的圆周率值。
要求精确到最后一项的绝对值小于给定精度eps。

如果item初始值设定为0，运行结果是什么？
当item初始值设定为0时，运行结果pi=0.0000 i=1，因为item不大于esp,while未能进入循环。

如果将精度改为0.001，运行结果有变化吗？为什么？
精度改为0.001，运行结果pi=3.1436 i=501
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
    item = 1;
    pi = 0;
    while (fabs(item) >= eps)
    {
        pi = pi + item;
        flag = -flag;
        i++;
        denominator += 2;
        item = flag * 1.0 / denominator;
        printf("%d\n",denominator);
    }
    pi = pi + item;
    pi = pi * 4;
    printf("pi=%.4f\n", pi);
    printf("i=%d\n", i);
    return 0;
}