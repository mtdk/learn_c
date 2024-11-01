/*
求整数平均值：
输入4个整数，计算并输出这些整数的和与平均值，
其中平均值精确到小数点后1位。
*/
#include <stdio.h>
int main(void)
{

    int a, b, c, d;

    printf("Enter a b c d:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d+%d+%d+%d=%d\n", a, b, c, d, a + b + c + d);
    printf("(%d+%d+%d+%d)/4=%.1f\n", a, b, c, d, (a + b + c + d) / 4.0);
    return 0;
}