/*
输入一个正整数n，计算 1-1/3+1/5-1/7+...的前n项之和
*/
#include <stdio.h>
int main(void)
{
    int denominator, flag, i, n;
    double item, sum;

    printf("Enter n:");
    scanf("%d", &n);

    // 执行循环前给变量赋值
    flag = 1;
    denominator = 1;
    item = 1;
    sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + item;
        flag = -flag;
        denominator = denominator + 2;
        item = flag * 1.0 / denominator;
    }
    printf("sum=%f\n", sum);

    return 0;
}