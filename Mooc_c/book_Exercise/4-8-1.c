/*
求最大值问题。
输入一批学生成绩，找出最高分。
先输入一个正整数n，代表数据的个数，然后再输入n个数据，
循环重复n次，属于指定次数循环，用for语句实现。

如果先输入0，即输入数据个数n=0，表示不再输入任何成绩，运行结果是什么？
如何修改程序以应对这种情况？
*/
#include <stdio.h>
int main(void)
{
    int i, mark, max, n;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d marks:", n);
    scanf("%d", &mark);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &mark);
        if (max < mark)
        {
            max = mark;
        }
    }
    printf("Max=%d\n", max);

    return 0;
}
// 结果已在book_example/4-8-1.c