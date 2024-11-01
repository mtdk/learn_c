/*
输入一个正整数n，计算 1-2/3+3/5-4/7+5/9-6/11...的前n项之和
*/
#include <stdio.h>
int main(void)
{
    int n, flag, denom;
    double sum;

    printf("Enter n:");
    scanf("%d", &n);
    flag = 1;
    denom = 1;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += flag * (double)i / denom;
        flag = -flag;
        denom += 2;
    }
    printf("%.3lf\n", sum);
    return 0;
}