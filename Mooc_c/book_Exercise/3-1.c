/*
计算二分段函数

为了鼓励居民节约用水，自来水公司采取用水量按月分段计费的办，
居民应交水费y(元)与月用水量x(吨)的函数关系式如下(设 x>=0 )。
输入用户的月用水量x(吨)，计算并输出该用户应支付的水费y(元)(保留两位小数)。
虽然现实生活中用水量x不会出现小于0的情况，但是程序运行时如果不慎输入一个负数，
水费计算将会出错。为了完善分段计算水费的程序，现将居民应交水费y(元)与月用水量x(吨)的函数关系式修正如下，并编程实现。

为了检查else-if语句的三个分支是否正确，已经设计了三组测试用例，请问还需要增加测试用例吗？
为什么？如果要增加，请给出具体的测试用例并运行程序。

需要增加一个检查项，将x<0修改为x<=0，并输入0进行测试。

y=f(x)=0 (x<0)
y=f(x)=4x/3 (x<=15)
y=f(x)=2.5x-10.5 (x>15)

*/
#include <stdio.h>
int main(void)
{
    double x, y;
    printf("Enter x:");
    scanf("%lf", &x);
    if (x <= 0)
    {
        y = 0;
    }
    else if (x <= 15)
    {
        y = 4 * x / 3;
    }
    else
    {
        y = 2.5 * x - 10.5;
    }
    printf("f(%.2f)=%.2f\n", x, y);

    return 0;
}