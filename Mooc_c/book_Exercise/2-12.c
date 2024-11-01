/*
输出华氏-摄氏温度转换表：输入两个整数 lower 和 upper，
输出一张华氏-摄氏温度转换表，华氏温度的取值范围[lower,upper]，
每次增加2℉
*/
#include <stdio.h>
int main(void)
{
    int lower, upper, fahr;
    double celsius;

    printf("Enter lower:");
    scanf("%d", &lower);
    printf("Enter upper:");
    scanf("%d", &upper);

    if (lower <= upper)
    {
        printf("fahr celsius\n");
        for (fahr = lower; fahr <= upper; fahr = fahr + 2)
        {
            celsius = (5.0 / 9.0) * (fahr - 32);
            printf("%4d%6.1f\n", fahr, celsius);
        }
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}