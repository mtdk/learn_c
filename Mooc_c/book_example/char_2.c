/*
写一段程序判读啊键盘输入的字符是否为英文字母
*/
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character:");
    ch = getchar();
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("It is a letter.\n");
    }
    else
    {
        printf("It is not a letter.\n");
    }

    return 0;
}