/*
求奇数和。
输入一批正整数（以零或负数为结束标志），求其中的奇数和。
*/
#include <stdio.h>
int main(void)
{
    int sum, number;
    sum = 0;
    do
    {
        printf("Enter a number:");
        scanf("%d", &number);
        if (number > 0 && number % 2 != 0)
        {
            sum = sum + number;
        }
    } while (number > 0);

    printf("Sum=%d\n", sum);

    return 0;
}