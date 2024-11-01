/*
序列求和(1-1/4+1/7-1/10+1/13-1/16+...)，输入一个正实数eps，
计算序列1-1/4+1/7-1/10+1/13-1/16+...的值，
精确到最后一项的绝对值小于eps(保留6位小数)。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, flag, denomitor;
    double sum, eps, item;
    i = 1;
    flag = 1;
    denomitor = 1;
    item = 1;
    sum = 0;
    printf("Enter eps:");
    scanf("%lf", &eps);
    while (fabs(item) >= eps)
    {
        sum += item;
        i++;
        flag = -flag;
        denomitor += 3;
        item = flag * 1.0 / denomitor;
    }
    sum += item;
    printf("sum = %.6f\n", sum);
    printf("i=%d\n", i);
    return 0;
}