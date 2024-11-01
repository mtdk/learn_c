/*
计算分段函数：输入实数x，计算并输出下列分段函数f(x)的值(保留2位小数)，
请调用函数sqrt()求平方根，调用pow()求幂。

f(x) = (x+1)的平方+2x+1/x (x<0)
f(x) = 根号x (x>=0)
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y;

    printf("Enter x:");
    scanf("%lf", &x);

    if (x >= 0)
    {
        y = sqrt(x);
    }
    else
    {
        y = pow((x + 1), 2) + 2 * x + 1 / x;
    }

    printf("f(%.2f)=%.2f\n", x, y);

    return 0;
}