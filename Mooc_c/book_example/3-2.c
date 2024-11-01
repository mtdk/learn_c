/*
奇偶分家。
输入一个正整数n，再输入n个非负整数，统计奇数和偶数各有多少个。
*/
#include <stdio.h>
int main(void)
{
    int count_odd, count_even, i, n, number;
    count_odd = 0;      // 记录奇数个数
    count_even = 0;     // 记录偶数个数
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d numbers:", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        if (number % 2 != 0)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }
    printf("Odd:%d, Even:%d\n", count_odd, count_even);

    return 0;
}