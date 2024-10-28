/*
板砖问题。
某工地需要搬运砖块，已知男人一人搬3块，
女人一人搬2块，小孩两人搬1块。
如果想用n人正好搬n块砖，问有哪些搬法？
用枚举的思路，枚举对象是男人、女人和小孩的人数，
将其分别设为变量men、women和children，
以总人数men+women+children==n和men*3+women*2+children/2==n为判断条件，
变量的取值范围都是[0,n]。3个变量在各自的取值范围内遍历，采用三重循环嵌套，
找出所有满足条件的解。

另一种算法：
由于男人、女人和小孩的总人数是固定的，可以枚举men和women，children则通过约束条件算出，
即children=n-men-women。同时考虑到最多只有n块砖，男人的数量不会超过n/3，
女人的数量不会超过n/2，这样就缩小了枚举的范围。改进后如下：
*/
#include <stdio.h>
int main(void)
{
    int children, cnt, men, limit_m, n, women, limit_w;

    printf("Enter n:");
    scanf("%d", &n);
    cnt = 0;
    limit_m = n / 3;
    limit_w = n / 2;
    for (men = 0; men <= limit_m; men++)
    {
        for (women = 0; women <= limit_w; women++)
        {
            children = n - men - women;
            if (men * 3 + women * 2 + children * 0.5 == n)
            {
                printf("men=%d, women=%d, children=%d\n", men, women, children);
                cnt++;
            }
        }
    }
    if (cnt == 0)
    {
        printf("\n");
    }

    return 0;
}