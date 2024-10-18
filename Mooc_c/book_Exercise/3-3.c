/*
统计学生平均成绩与及格人数：
输入一个正整数n，再输入n个学生的成绩，
计算平均成绩，并统计所有及格学生的人数。
*/
#include <stdio.h>
int main(void)
{
    int count, i, n;
    double score, total;
    printf("Enter n:");
    scanf("%d", &n);
    total = 0;
    count = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Enter score #%d:", i);
        scanf("%lf", &score);
        total += score;
        if (score >= 60)
        {
            count++;
        }
    }
    if (n != 0)
    {
        printf("平均分 = %.2f\n", total / n);
    }
    else
    {
        printf("平均分 = %.2f\n", 0.0);
    }
    printf("及格学生人数 = %d\n", count);

    return 0;
}