/*
统计英文字母和数字字符。
输入一个整数n，在输入n个字符，
统计其中英文字母、数字字符和其他字符的个数。
*/
#include <stdio.h>
int main(void)
{
    int digit, i, letter, n, other;
    char ch;

    digit = letter = other = 0;
    printf("Enter n:");
    scanf("%d", &n);
    getchar();
    printf("Enter %d characters:", n);
    for (i = 1; i <= n; i++)
    {
        ch = getchar();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letter++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }

    printf("letter=%d,digit=%d,other=%d\n", letter, digit, other);

    return 0;
}