/*
简单的猜字游戏。
*/
#include <stdio.h>
int main(void)
{
    int mynumber = 38;
    int yournumber;

    printf("Input your number:");
    scanf("%d", &yournumber);
    if (yournumber == mynumber)
    {
        printf("Good Guess!\n");
    }
    else if (yournumber > mynumber)
    {
        printf("Too big!\n");
    }
    else
    {
        printf("Too small!\n");
    }

    return 0;
}