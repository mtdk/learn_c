/*
猜字游戏。更改例3-1简单的猜字游戏。
输入你所猜的整数（假定为1~100），与计算机产生的被猜数比较，
若相等，显示猜中；若不相等，显示与被猜数的大小关系，最多允许猜7次。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int count, flag, mynumber, yournumber;
    srand(time(0));              // 设定随机数的产生与系统时钟管理
    mynumber = rand() % 100 + 1; // 计算机随机产生一个1~100之间的被猜数
    flag = 0;                    // flag的值为0表示没猜中，为1表示猜中了
    while (count < 7)
    {
        printf("Enter your number:");
        scanf("%d", &yournumber);
        if (yournumber == mynumber)
        {
            printf("Lucky You!\n");
            flag = 1;
            break;
        }
        else if (yournumber > mynumber)
        {
            printf("Too big\n");
        }
        else
        {
            printf("Too small\n");
        }
    }
    if (flag == 0)
    {
        printf("Game Over!\n");
    }

    return 0;
}