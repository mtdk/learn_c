/*
如何用1角、2角、5角凑出10元以下的金额呢
*/
#include <stdio.h>
int main(void)
{

    int x;
    int one, two, five;

    x = 2;
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个1加%d个2加%d个5的到%d\n", one, two, five, x);
                }
            }
        }
    }

    return 0;
}