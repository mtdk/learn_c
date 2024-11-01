#include <stdio.h>
int main()
{
    // int a, b, c, d;

    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // printf("Sum = %d", a + b + c + d);
    // printf("Average = %0.1f", (a + b + c + d) / 4.0);

    // printf("%d\n", 25 / 5 * 2);

    // int x;
    // scanf("%d", &x);

    // switch (x >= 0)
    // {
    // case 0:
    //     printf("F(x)=-1");
    //     break;

    // case 1:
    //     printf("F(x)=%d", 2 * x);
    //     break;
    // }

    // int i = 1;
    // switch (i % 3)
    // {
    // case 0:
    //     printf("zero");
    // case 1:
    //     printf("one");
    // case 2:
    //     printf("two");
    // }

    // int n;
    // printf("请输入同学的数量 n:");
    // scanf("%d", &n);

    // printf("站在第一列的同学编号是：\n");
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    // printf("\n");

    // int sum = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2) continue;
    //     printf("%d mod 2 = %d\n",i,i%2);
    //     sum += i;
    //     printf("sum = %d\n",sum);
    // }
    // printf("%d\n", sum);

    // int sum = 0;
    // for(int i=0;i<10;i++){
    //     if(i%2) break;
    //     sum+=i;
    // }
    // printf("%d\n",sum);
    int a['A'];

    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        a[i] = i;
    }

    printf("%d\n", a[5]);
    printf("a[] sizeof = %d\n", len);
    return 0;
}