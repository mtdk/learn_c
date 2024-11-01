/*
求最大值问题。
输入一批学生成绩，找出最高分。
输入n个数据代表学生成绩，
设定一个特殊数据(伪数据)作为循环的结束标志，由于成绩都是非负数，
选用一个负数作为输入的结束标志。由于循环次数未知，考虑使用while循环。

如果输入的第一个数就是负数，表示不再输入任何成绩，运行结果是什么？
如何修改程序以应对这种情况？
*/
#include <stdio.h>
int main(void)
{
    int mark, max;

    printf("Enter marks:");
    scanf("%d", &mark);
    max = mark;

    while (mark > 0)
    {
        if (max < mark)
        {
            max = mark;
        }
        scanf("%d", &mark);
    }
    printf("Max=%d\n", max);

    return 0;
}

// 结果已在book_example/4-8-2.c