/*
出租车计价：某城市出租车收费标准如下：
起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
*/
#include <stdio.h>
int main(void)
{

    double total_journeys = 0; // 总旅程数
    int wait_time = 0;         // 等待时间
    double wait_money = 0;     // 等待计费
    double stage_charging = 0; // 分段计费统计
    double total_charge = 0;   // 总收费

    printf("请输入总旅程数和等待时间：");
    scanf("%lf %d", &total_journeys, &wait_time);
    if (total_journeys > 0)
    {
        if (total_journeys <= 3)
        {
            // 总旅程数小于等于3公里
            stage_charging = 10;
        }
        else if (total_journeys > 3 && total_journeys <= 10)
        {
            // 总旅程数大于3公里小于等于10公里
            stage_charging = (total_journeys - 3) * 2 + 10;
        }
        else
        {
            // 总旅程数大于10公里
            stage_charging = (total_journeys - 10) * 3 + (10 - 3) * 2 + 10;
        }

        if (wait_time >= 5)
        {
            // 等待时间大于等于5分钟
            wait_money = wait_time / 5 * 2;
        }
        // 总费用 = 分段计费 + 等待收费
        total_charge = stage_charging + wait_money;
        printf("总费用：%.0f\n", total_charge);
    }
    else
    {
        printf("总费用：%.0f\n", total_charge);
    }

    return 0;
}