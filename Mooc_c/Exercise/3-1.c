/*
比较大小：
输入3个整数，按从小到大的顺序输出。
*/
#include <stdio.h>
int main(void)
{
    int a, b, c;
    int max;
    printf("Enter a b c:");
    scanf("%d %d %d", &a, &b, &c);
    max = c;
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
    }

    printf("max=%d\n", max);

    return 0;
}