/*
将华氏温度转换成摄氏温度

求华氏温度100度对应的摄氏温度。
计算公式如下：
c=5*(f-32)/9
式中：c表示摄氏温度，f表示华氏温度

*/
#include <stdio.h>
int main(void)
{
    // 定义两个变量celsius表示摄氏温度，fahr表示华氏温度
    int celsius, fahr;

    fahr = 100;
    celsius = 5 * (fahr - 32) / 9;

    printf("farh=%d, celsius=%d\n", fahr, celsius);

    return 0;
}