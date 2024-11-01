/*
整数四则运：输入2个正整数，计算并输出他们的和、差、积、商
*/
#include <stdio.h>
int main()
{
    int a, b;

    printf("请输入2个数:");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}