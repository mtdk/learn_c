/*
简单计算器。
模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。

输入格式:
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。

输出格式:
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。

输入样例:
1+2*10-10/2=

输出样例:
10
*/
#include <stdio.h>

int main() {
    char ch; // 当前字符
    int current_number = 0; // 当前操作数
    int result = 0; // 最终结果
    char operator = '+'; // 初始操作符为加法

    // 逐个读取字符直到遇到等号
    while ((ch = getchar()) != '=') {
        if (ch >= '0' && ch <= '9') {
            // 构建当前数字
            current_number = current_number * 10 + (ch - '0');
        } else {
            // 遇到运算符，进行计算
            if (operator == '+') {
                result += current_number;
            } else if (operator == '-') {
                result -= current_number;
            } else if (operator == '*') {
                result *= current_number;
            } else if (operator == '/') {
                if (current_number == 0) {
                    printf("ERROR\n");
                    return 0; // 除以0错误
                }
                result /= current_number;
            } else {
                printf("ERROR\n");
                return 0; // 非法运算符错误
            }

            // 更新操作符和当前数字
            operator = ch;
            current_number = 0; // 重置当前数字
        }
    }

    // 处理最后一个数字
    if (operator == '+') {
        result += current_number;
    } else if (operator == '-') {
        result -= current_number;
    } else if (operator == '*') {
        result *= current_number;
    } else if (operator == '/') {
        if (current_number == 0) {
            printf("ERROR\n");
            return 0; // 除以0错误
        }
        result /= current_number;
    } else {
        printf("ERROR\n");
        return 0; // 非法运算符错误
    }

    // 输出结果
    printf("%d\n", result);
    return 0;
}