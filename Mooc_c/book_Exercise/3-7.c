/*
成绩转换：
输入一个百分制成绩，将其转换为五分制成绩。
百分制到五分制成绩的转换规则：
大于或等于90分为A，小于90且大于或等于80分为B，
小于80分且大于或等于70分为C，小于70分且大于或等于60为D，
小于60分为D，小于60分为E。
*/
#include <stdio.h>
int main(void)
{
    int score;

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