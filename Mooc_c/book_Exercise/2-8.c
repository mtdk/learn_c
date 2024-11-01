/*
计算摄氏温度：输入华氏温度，输出对应的摄氏温度，计算公式同例2-3*/
#include <stdio.h>
int main()
{
    // 定义两个变量celsius表示摄氏温度，fahr表示华氏温度
    int celsius, fahr;

    printf("Enter fahr:");
    scanf("%d", &fahr);

    celsius = 5 * (fahr - 32) / 9;
    printf("fahr=%d, celsius=%d\n", fahr, celsius);

    return 0;
}