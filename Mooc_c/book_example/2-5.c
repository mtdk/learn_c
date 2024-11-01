/*
坚持的力量
坚持的力量。以第一天的能力值为基数，用initial表示，能力值相比前一天提高的值factor就是努力参数，坚持天数为day，
让我们一起来看看坚持的力量。输入能力的初始值initial、努力参数factor和坚持天数day，根据下列公式计算出坚持努力
后达到的能力值，输出表六两位小数。

result = initial(1+factor)day次方

*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int day;
    double initial, factor, result;

    printf("Enter initial:");
    scanf("%lf", &initial);
    printf("Enter factor:");
    scanf("%lf", &factor);
    printf("Enter day:");
    scanf("%d", &day);
    result = initial * pow(1 + factor, day);
    printf("result=%.2f\n", result);

    return 0;
}