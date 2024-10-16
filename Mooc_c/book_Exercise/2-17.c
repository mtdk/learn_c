/*
生成3的乘方表：输入一个正整数n，生成一张3的乘方表，
输出3的0次方到3的n次方。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    double power;

    printf("Enter n:");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        power = pow(3, i);
        printf("pow(3,%d)=%.0f\n", i, power);
    }

    return 0;
}