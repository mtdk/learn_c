/*
统计学生成绩：
输入一个正整数n，再输入n个学生的成绩，统计五分制成绩的分布，
百分制成绩的转换规则：大于或等于90分为A，
小于90分且大于或等于80分为B，小于80分且大于或等于70分为C，
小于70分且大于或等于60分为D，小于60分为E。
*/
#include <stdio.h>
int main(void)
{
    int n, score;
    printf("Enter n:");
    scanf("%d", &n);
    getchar();
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("Enter score:");
            scanf("%d", &score);
            if (score >= 90)
            {
                printf("A\n");
            }
            else if (score >= 80)
            {
                printf("B\n");
            }
            else if (score >= 70)
            {
                printf("C\n");
            }
            else if (score >= 60)
            {
                printf("D\n");
            }
            else
            {
                printf("E\n");
            }
        }
    }

    return 0;
}