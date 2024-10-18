/*
求解简单的四则运算表达式。
输入一个形式如“操作数 运算符 操作数”的四则运算表达式，
输出运算结果，要求对除数为0的情况作特别处理。
*/
#include <stdio.h>
int main(void)
{
    double value1, value2;
    char op;

    printf("Type in an expression:");
    scanf("%lf%c%lf", &value1, &op, &value2);
    if (op == '+')
    {
        printf("=%.2f\n", value1 + value2);
    }
    else if (op == '-')
    {
        printf("=%.2f\n", value1 - value2);
    }
    else if (op == '*')
    {
        printf("=%.2f\n", value1 * value2);
    }
    else if (op == '/')
    {
        if (value2 != 0)
        {
            printf("=%.2f\n", value1 / value2);
        }
        else
        {
            printf("Divisor can not be 0!\n");
        }
    }
    else
    {
        printf("Unknown operator!\n");
    }

    return 0;
}