/*
题目内容：奇偶个数
你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。

输入格式:
一系列正整数，整数的范围是（0,100000）。如果输入-1则表示输入结束。

输出格式：
两个整数，第一个整数表示读入数据中的奇数的个数，第二个整数表示读入数据中的偶数的个数。两个整数之间以空格分隔。

输入样例：
9 3 4 2 5 7 －1

输出样例：
4 2
*/
#include <stdio.h>

int main()
{
    int number;
    int odd_count = 0;  // 奇数计数
    int even_count = 0; // 偶数计数

    printf("请输入一系列正整数，以-1结束：\n");

    while (1)
    {
        scanf("%d", &number);

        if (number == -1)
        {
            break; // 输入-1时结束循环
        }

        if (number % 2 == 0)
        {
            even_count++; // 偶数计数加1
        }
        else
        {
            odd_count++; // 奇数计数加1
        }
    }

    // 输出奇数和偶数的个数
    printf("%d %d\n", odd_count, even_count);

    return 0;
}