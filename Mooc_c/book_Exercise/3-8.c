/*
查询水果的单价：
有4种水果，苹果(apple)、梨(pears)、
橘子(orange)和葡萄(grape)，单价分别是3.00元/千克，
2.50元/千克，4.10元/千克和10.20元/千克。
在屏幕上显示以下菜单（编号和选项），用户可以连续查询水果的单价，
当查询次数超过5次时，自动退出查询；不到5次时，用户可以选择退出。
当用户输入编号1~4，显示相应水果的单价（保留一位小数）；
输入0，退出查询；输入其他编号，显示价格为0。
*/
#include <stdio.h>
int main(void)
{

    int k, n;
    double price;
    printf("[1] apples\n");
    printf("[2] pears\n");
    printf("[3] oranges\n");
    printf("[4] grapes\n");
    printf("[0] Exit\n");

    for (k = 1; k <= 5; k++)
    {
        printf("Enter choice:");
        scanf("%d", &n);
        if (n == 0)
            break;
        switch (n)
        {
        case 1:
            price = 3.00;
            break;
        case 2:
            price = 2.50;
            break;
        case 3:
            price = 4.10;
            break;
        case 4:
            price = 10.20;
            break;
        default:
            price = 0.00;
            break;
        }
        printf("price=%0.1f\n", price);
    }
    printf("Thanks\n");

    return 0;
}