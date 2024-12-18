/*
输入一个整数n，再输入n各字符，分别统计其中空格或回车、数字字符和其他字符的个数。
要求使用switch语句编写。
*/
#include <stdio.h>
int main(void)
{
    int blank, digit, i, n, other;
    char ch;

    blank = digit = other = 0;
    printf("Enter n:");
    scanf("%d", &n);
    getchar();
    printf("Enter %d characters:", n);
    for (i = 1; i <= n; i++)
    {
        ch = getchar();
        /*在switch语句中灵活应用break*/
        switch (ch)
        {
        case ' ':
        case '\n':
            blank++;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            digit++;
            break;
        default:
            other++;
            break;
        }
    }
    printf("blank=%d, digit=%d, other=%d\n", blank, digit, other);

    return 0;
}