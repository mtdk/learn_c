// 计算天数
/*
本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式：
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。
注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。
闰年的2月有29天。

输出格式：
在一行输出日期是该年中的第几天。

输入样例1：
2009/03/02

输出样例1：
61

输入样例2：
2000/03/02

输出样例2：
62

*/
#include <stdio.h>
int main()
{
    int year;
    int month;
    int day;
    int days = 0;

    scanf("%d/%d/%d", &year, &month, &day);

    if (month == 1)
    {
        printf("%d\n", day);
    }
    else
    {
        for (int i = 1; i < month; i++)
        {
            switch (i)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days += 31;
                break;
            case 2:
                days += 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days += 30;
                break;
            }
        }
    }
    days += day;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            days += 1;
        }
    }

    printf("%d\n", days);

    return 0;
}