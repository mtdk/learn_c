/*
判断素数：
输入一个正整数n，判断它是否位素数。
素数：只能被1和它自身整除的正整数，1不是素数，2是素数。
用求余运算%来判断整除，余数为0表示能被整除，否则就意味着不能被整除。即对每个i，m%i都不为0，则m是素数。
但，在[2,m-1]区间内能找到一个i，是m%i为0，则肯定不是素数。
取值范围[2,m-1]，由于m不可能被大于m/2的数整除（数学上能证明），所以取值区间可以缩小为[2,m/2]

可以用下列for语句替代吗？为什么？
for(i=2;i<=m/2;i++){
    if(m%i==0){
        printf("No!\n");
    }else{
        printf("%d is a prime number!\n",m);
    }
}
不能用上述for语句代替。分析如下：
假设输入数字9(即m=9)，判断9是否为素数
根据条件i=2,i<=m，i++
i=2 m%i!=0 i++  不是素数
i=3 m%i==0 i++  是素数
i=4 m%i!=0 i++  不是素数
i>m/2 退出for循环
根据i<=m/2，for语句循环的结束条件是i>m/2，
因此for循环至少执行3次(m/2约等于4)，
且for语句中的if语句在每一次循环都做一次求余运算，
并且根据当前求余结果打印是否为素数。
结果当如上所示，得不到准确的结果。
最终得到的结果是求2~4之间各数是否为素数。不是题目所要求的9是否为素数。
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, limit, m;
    printf("Enter a number:");
    scanf("%d",&m);
    if (m < 1)
    {
        printf("No!\n");
    }
    else if (m == 2)
    {
        printf("%d si a prime number!\n", m);
    }
    else
    {
        for (i = 2; i <= m / 2; i++)
        {
            printf("%d\n",i);
            if (m % i == 0)
            {
                printf("No!\n");
            }
            else
            {
                printf("%d is a prime number!\n", m);
            }
        }
    }

    return 0;
}