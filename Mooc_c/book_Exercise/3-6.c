/*
在例3-8程序中，如果把switch语句中的break都去掉，
运行结果会改变吗？如果有变化，输出什么？为什么？
*/
#include <stdio.h>
int main(void)
{
    int choice, i;
    double price;

    /*以下显示5行菜单*/
    printf("[1] Select crisps\n");
    printf("[2] Select popcorn\n");
    printf("[3] Select chocolate\n");
    printf("[4] Select cola\n");
    printf("[0] exit\n");

    for (i = 1; i <= 5; i++)
    {
        printf("Enter choice:");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        /*根据输入的编号，将相应的价格赋值给price*/
        switch (choice)
        {
        case 1:
            price = 3.0;
        case 2:
            price = 2.5;
        case 3:
            price = 4.0;
        case 4:
            price = 3.5;
        default:
            price = 0.0;
        }
        printf("price=%0.1f\n", price);
    }
    printf("Thanks\n");

    return 0;
}