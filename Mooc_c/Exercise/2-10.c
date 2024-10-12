/*
计算分段函数(判断x是否不为0)：输入x，计算并输出下列分段函数f(x)的值(保留1位小数)
*/
#include <stdio.h>
int main(void)
{
    int x, y;

    scanf("%d", &x);
    if (x > 0)
    {
        y = 1 / x;
    }
    else
    {
        y = 0;
    }

    printf("%.1f\n", y);

    return 0;
}