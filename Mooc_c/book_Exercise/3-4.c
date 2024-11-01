/*
统计字符：
输入1个正整数n，再输入n个字符，
统计其中英文字母、空格或回车、
数字字符和其他字符的个数。
*/
#include <stdio.h>
int main(void)
{
    int digit, n, k, letter, enter, other;
    char ch;
    digit = letter = enter = other = 0;
    printf("Enter n:");
    scanf("%d", &n);
    getchar();
    if (n > 0)
    {
        printf("Enter %d characters:", n);
        for (k = 1; k <= n; k++)
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
            else if (ch == ' ' || ch == '\n')
            {
                enter++;
            }
            else
            {
                other++;
            }
        }

        printf("letter=%d, digit=%d, enter=%d, other=%d\n", letter, digit, enter, other);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}