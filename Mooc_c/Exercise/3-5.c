/*
三角形判断：
输入平面上三个点的坐标(x1,y1)、(x2,y2)、(x3,y3)，检验它们能否构成三角形。
如果这3个点能构成三角形，输出周长和面积(保留2位小数)，否者输出"Impossible"。
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int x1, x2, x3, y1, y2, y3;
    double a, b, c, s, perimeter, area;
    printf("请输入(x1,y1)的坐标：");
    scanf("%d %d", &x1, &y1);
    printf("请输入(x2,y2)的坐标：");
    scanf("%d %d", &x2, &y2);
    printf("请输入(x3,y3)的坐标：");
    scanf("%d %d", &x3, &y3);

    a = pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2);
    b = pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2);
    c = pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2);
    printf("a = %f b = %f c = %f\n", a, b, c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        perimeter = a + b + c;
        s = perimeter / 2; // s=(a+b+c)/2
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("周长：%.2f,面积：%.2f\n", perimeter, area);
    }
    else
    {
        printf("Impossible\n");
    }
}