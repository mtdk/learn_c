/*
阶梯电价：
居民用电分为两个“阶梯”：用电量50千瓦时（含50千瓦时）以内的，
电价为0.53元/千瓦时，用电量超过50千瓦时的，超出部分的用电量
电价为每千瓦时上调0.05元。
输入用户用电量，计算并输出用户应支付的电费，若用电量小于0，
则输出"Invalid Value!"。
*/
#include <stdio.h>
int main(void)
{
    int ydl;

    scanf("%d", &ydl);
    if (ydl >= 0)
    {
        if (ydl > 50)
        {
            printf("%lf\n", ((ydl - 50) * 0.58) + 50 * 0.53);
        }
        else
        {
            printf("%f\n", ydl * 0.53);
        }
    }
    else
    {
        printf("Invalid Value!\n");
    }
    return 0;
}