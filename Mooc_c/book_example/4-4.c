/*
逆序输出一个整数的各位数字。
输入一个整数，将其逆序输出。
例如，输入12345，输出54321。
*/
#include <stdio.h>
int main(void)
{
    int number;

    printf("Enter a number:");
    scanf("%d", &number);
    do
    {
        printf("%d ", number % 10);
        number = number / 10;
    } while (number != 0);
    printf("\n");
    return 0;
}