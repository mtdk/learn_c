/*
猜字游戏：
先输入2个不超过100的正整数，分别是被猜数mynumber和允许猜测的最大次数n，
再输入你所猜的数yournumber，与被猜数进行比较，
若相等，显示猜中；若不相等，显示与被猜数的大小关系，最多允许猜n次。
如果1次就猜中该数，提示"Bingo!"；如果3次内猜到该数，提示"Lucky You!"，
如果超过3次，但不超过n次猜到该数，则提示"Good Guess!"；如果超过n次都没猜到，
则提示"Game Over"；如果到达n次之前，用户输入一个负数，也输出"Game Over"，并结束程序。
*/
#include <stdio.h>
int main(void)
{
    int n, mynumber, yournumber, flag, count;
    flag = 0;
    count = 0;
    printf("请输入一个大于1的整数：");
    scanf("%d", &n);

    if (n > 1)
    {
        printf("请输入如一个1~100之间的整数作为被猜数：");
        scanf("%d", &mynumber);
        if (mynumber >= 1 && mynumber <= 100)
        {
            while (count < n)
            {
                printf("请输入你猜测的数字：");
                scanf("%d", &yournumber);
                if (yournumber >= 0)
                {
                    if (yournumber == mynumber)
                    {
                        flag = 1;
                        count++;
                        break;
                    }
                    else if (yournumber > mynumber)
                    {
                        printf("Too big!\n");
                        count++;
                    }
                    else
                    {
                        printf("Too small!\n");
                        count++;
                    }
                }
                else
                {
                    printf("Game Over!\n");
                }
            }

            if (flag == 1)
            {
                if (count == 1)
                {
                    printf("Bingo!\n");
                }
                else if (count <= 3)
                {
                    printf("Lucky you!\n");
                }
                else
                {
                    printf("Good Guess!\n");
                }
            }
            else
            {
                printf("Game Over!\n");
            }
        }
        else
        {
            printf("Game Over!\n");
        }
    }
    else
    {
        printf("Game Over!\n");
    }
}