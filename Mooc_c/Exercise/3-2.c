/*
高速公路超速处罚：
按规定超出本车道限速的10%则处罚200元；
若超出50%，就要吊销驾驶证。
请编写程序根据车速和限速自动判别对该机动车的处理。
*/
#include <stdio.h>
int main(void)
{
    int xs;                         // 限速指标
    double current_speed, cs_count; // 当前车速  超速比例
    xs = 80;
    printf("请输入当前车速：");
    scanf("%lf", &current_speed);
    if (current_speed > 0)
    {
        if (current_speed > xs)
        {
            cs_count = (current_speed - xs) / xs * 100;
            if (cs_count >= 50)
            {
                printf("超速%.2f%%,吊销驾驶证。\n", cs_count);
            }
            else if (cs_count >= 10)
            {
                printf("超速%.2f%%,罚款200元。\n", cs_count);
            }
        }
        else
        {
            printf("您未超速不用处罚。\n");
        }
    }
    else
    {
        printf("Invalid Value!");
    }

    return 0;
}