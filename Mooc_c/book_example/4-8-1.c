/*
求最大值问题。
输入一批学生成绩，找出最高分。
先输入一个正整数n，代表数据的个数，然后再输入n个数据，
循环重复n次，属于指定次数循环，用for语句实现。
*/
#include <stdio.h>
int main(void)
{
    int i, n, score, max;
    max = 0;
    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("Enter No.%d score:", i);
            scanf("%d", &score);
            if (score > max)
            {
                max = score;
            }
        }
        printf("Max score is %d\n", max);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}