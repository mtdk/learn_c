/*
输入一个正整数n，生成一张2的乘方表，
输出2的零次方到2的n次方的值，可以调用幂函数计算2的乘方
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    double power;

    printf("Enter n:");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (i = 0; i <= n; i++)
        {
            power = pow(2, i);
            printf("pow(2,%d)=%.f\n", i, power);
        }
    }
    else
    {
        printf("Invalid value!\n");
    }

    return 0;
}