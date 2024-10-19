/*
重新编写例3-4的程序，要求使用嵌套的if-else语句，并上机运行。
*/
#include <stdio.h>
int main(void)
{
    double x, y;
    printf("Enter x:");
    scanf("%lf", &x);
    if (x >= 0)
    {
        if (x <= 15)
        {
            y = 4 * x / 3;
        }
        else
        {
            y = 2.5 * x - 10.5;
        }
        printf("f(%.2f)=%.2f\n", x, y);
    }
    else
    {
        printf("Invalid Value!\n");
    }
    return 0;
}