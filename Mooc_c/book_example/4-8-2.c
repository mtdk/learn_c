/*
求最大值问题。
输入一批学生成绩，找出最高分。
输入n个数据代表学生成绩，
设定一个特殊数据(伪数据)作为循环的结束标志，由于成绩都是非负数，
选用一个负数作为输入的结束标志。由于循环次数未知，考虑使用while循环。
*/
#include <stdio.h>
int main(void)
{
    int i, score, max;
    max = 0;
    i = 1;
    printf("Enter No.%d score:", i);
    scanf("%d", &score);
    while (score >= 0)
    {
        i++;
        if (score > max)
        {
            max = score;
        }
        printf("Enter No.%d score:", i);
        scanf("%d", &score);
    }
    printf("Max score is %d\n", max);

    return 0;
}