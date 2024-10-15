#include <stdio.h>
int main(void)
{
    int sum;
    for (int i = 1; i <= 10; i++)
    {
        sum = 0;
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}