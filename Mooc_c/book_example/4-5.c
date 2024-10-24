/*
判断素数：
输入一个正整数n，判断它是否位素数。
素数：只能被1和它自身整除的正整数，1不是素数，2是素数。
用求余运算%来判断整除，余数为0表示能被整除，否则就意味着不能被整除。即对每个i，m%i都不为0，则m是素数。
但，在[2,m-1]区间内能找到一个i，是m%i为0，则肯定不是素数。
取值范围[2,m-1]，由于m不可能被大于m/2的数整除（数学上能证明），所以取值区间可以缩小为[2,m/2]
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, limit, m;
    printf("Enter a number:");
    scanf("%d", &m);
    if (m < 1)
    {
        printf("No!\n");
    }
    else if (m == 2)
    {
        printf("%d si a prime number!\n", m);
    }
    else
    {
        limit = sqrt(m) + 1;
        for (i = 2; i <= limit; i++)
        {
            if (m % i == 0)
            {
                break;
            }
        }
        if (i > limit)
        {
            printf("%d is a prime number!\n", m);
        }
        else
        {
            printf("No!\n");
        }
    }

    return 0;
}