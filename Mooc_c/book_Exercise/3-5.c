/*
输出闰年：
输出21世纪中截止某个年份之前的所有闰年年份。
判断闰年的条件是：
能被4整除但不能被100整除，或者能被400整除。
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a start year:");
    scanf("%d", &year);
    if (year >= 2000 && year <= 2099)
    {
        for (int k = 2000; k <= year; k++)
        {
            if ((k % 4 == 0 && k % 100 != 0) || (k % 400 == 0))
            {
                printf("year=%d\n", k);
            }
        }
    }
    else
    {
        printf("Out of range!\n");
    }
}