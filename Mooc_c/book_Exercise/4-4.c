/*
统计一个整数的位数。
从键盘输入一个整数，统计该数的位数。
例如，输入12534，输出5；输入-99，输出2；输入0，输出1。

将程序中do-while语句改为while语句，会影响程序的功能吗？为什么？在增加一条什么语句，就可以
*/
#include <stdio.h>
int main(void)
{
    int count, number, t_number;
    count = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    t_number = number;
    if (number < 0)
    {
        t_number = -t_number;
    }

    if(t_number==0){
        count++;
    }
    while (t_number != 0)
    {
        count++;
        t_number = t_number / 10;
    }
    printf("It contains %d digits.\n", count);

    return 0;
}