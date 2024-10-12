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

    int i = 1;
    switch (i % 3)
    {
    case 0:
        printf("zero");
    case 1:
        printf("one");
    case 2:
        printf("two");
    }
    
    return 0;
}