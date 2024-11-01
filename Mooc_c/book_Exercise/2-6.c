/*
计算物体自由下落的距离：
一个物体从100米高空自由下落，求它在前3秒内下落的垂直距离。
设重力加速度为10m每秒平方，试编写相应程序。
*/
#include <stdio.h>
int main(void)
{
    // second(时间) velocity(速度) height(高度即下落垂直距离)
    int second, velocity, height;

    second = 3;
    velocity = 10;

    height = velocity * second * second;

    printf("height = %d\n", height);

    return 0;
}