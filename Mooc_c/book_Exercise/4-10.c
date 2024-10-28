/*
找出最小值：输入一个正整数n，再输入n个整数，
输出最小值。
*/
#include <stdio.h>
int main(void)
{
    int i, n, m, min;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter number:");
    scanf("%d", &m);
    min = m;
    for (i = 1; i < n; i++)
    {
        printf("Enter number:");
        scanf("%d", &m);
        if (m < min)
        {
            min = m;
        }
    }

    printf("Min=%d\n", min);

    return 0;
}