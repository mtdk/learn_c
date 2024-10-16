/*
输入一个正整数n，计算n!(n的阶乘)
*/
#include <stdio.h>
int main(void)
{
    int i, n;
    double product;

    printf("Enter n:");
    scanf("%d", &n);
    product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }

    printf("product=%.0f\n",product);

    return 0;
}