/*
输入两个整数lower和upper，输出一张华氏——摄氏温度转换表，华氏温度的取值范围[lower,upper]，每次增加1华氏度。
计算公式如下：
c = 5*(f-32)/9
*/
#include <stdio.h>
int main(void){
    // fahr表示华氏温度，celsuis表示摄氏温度，lower为华氏温度下限，upper为华氏温度上限
    int fahr,lower,upper;
    double celsuis;

    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper);

    // 判断输入数据的合法性
    if(lower<=upper){

    }else{
        printf("Invalid Value!\n");
    }

    return 0;
}