#include <stdio.h>
int main(void)
{
    int celsius, fahr;
    fahr = 150;
    celsius = 5 / 9 * (fahr - 32);

    printf("fahr=%d, celsius=%d\n", fahr, celsius);

    return 0;
}