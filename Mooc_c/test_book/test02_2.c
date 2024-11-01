/*
用电量50kW.h(含50kW.h)以内的，电价位0.53元/kW.h；
超过50kW.h的，超出部分的用电量电价每千瓦时上调0.05元。
输入月用电量（千瓦时），计算并输出应支付的电费（元），
若用电量小于0，则输出"Invalid Value!
*/
#include <stdio.h>
int main(void)
{

    int kwh;
    double price;
    price = 0.53;
    printf("Enter kWh:");
    scanf("%d", &kwh);

    if (kwh >= 0)
    {
        if (kwh > 50)
        {
            printf("应付电费：%.2f\n", (kwh - 50) * (0.53 + 0.05) + 50 * 0.53);
        }
        else
        {
            printf("应付电费：%.2f\n", 50 * 0.53);
        }
    }
    else
    {
        printf("Invalid Value!\n");
    }
    return 0;
}