/*
求e的值：输入1个正整数n，计算下式的前n项之和(保留4位小数)。
要求使用嵌套循环。
*/
#include <stdio.h>
int main(void)
{
    int i, j, n;
    double item, sum, denomitor;
    sum = 0;
    printf("Enter N:");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            item=0;
            denomitor = 1;
            for (j = 1; j <= i; j++)
            {
                denomitor = denomitor * j;
            }
            item = 1.0 / denomitor;
            sum = sum + item;
        }
        printf("e=%0.4f\n", sum);
    }
    else
    {
        printf("Invalid Value!\n");
    }

    return 0;
}