/*
找零钱问题。
有足够数量的5分、2分和1分的硬币，
现在要用这些硬币来支付一笔小于1元的零钱money，
问至少多少个硬币？输入零钱，输出硬币的总数量和相应面额的硬币数量。
*/
#include <stdio.h>
int main(void)
{
    int flag, money, n1, n2, n5;

    flag = 1;
    printf("Enter money:");
    scanf("%d", &money);
    for (n5 = money / 5; (n5 >= 0) && (flag == 1); n5--)
    {
        for (n2 = (money - n5 * 5) / 2; (n2 >= 0) && (flag == 1); n2--)
        {
            for (n1 = money - n5 * 5 - n2 * 2; (n1 >= 0) && (flag == 1); n1--)
            {
                if ((n5 * 5 + n2 * 2 + n1) == money)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, totla:%d\n", n5, n2, n1, n1 + n2 + n5);
                    flag = 0;
                }
            }
        }
    }

    return 0;
}