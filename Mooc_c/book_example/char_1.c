/*
输入8个字符，然后将这些字符输出，
输出是在字符之间加一个减号，
第一个字符前面和最后一个字符后面没有减号‘
*/
#include <stdio.h>
int main(void)
{
    char ch;
    int first = 1, k;
    printf("Enter 8 characters:");
    for (k = 1; k <= 8; k++)
    {
        ch = getchar();
        if (first == 1)
        {
            putchar(ch);
            first = 0;
        }
        else
        {
            putchar('-');
            putchar(ch);
        }
    }

    return 0;
}