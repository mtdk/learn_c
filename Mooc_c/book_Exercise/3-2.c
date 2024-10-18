/*
计算符号函数的值：输入一个整数x，计算并输出下列分段函数sign(x)的值。
y=sign(x)= -1 x<0
y=sign(x)= 0  x=0
y=sign(x)= 1  x>0
*/
#include <stdio.h>
int main(void)
{
    int x, y;

    printf("Enter x:");
    scanf("%d", &x);

    if (x < 0)
    {
        y = -1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = 1;
    }
    printf("y=%d\n", y);

    return 0;
}