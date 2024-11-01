/*
统计一批学生的平均成绩与不及格人数。
更改例3-3。从键盘输入一批学生的成绩，
计算平均成绩，并统计不及格学生人数。
*/
#include <stdio.h>
int main(void){
    int count,num;
    double score,total;

    num=0;
    total=0;
    count=0;
    printf("Enter scores:");
    scanf("%lf",&score);
    while (score>=0)
    {
        total+=score;
        num++;
        if(score<60){
            count++;
        }
        scanf("%lf",&score);
    }
    if(num!=0){
        printf("Average is %.2f\n",total/count);
        printf("Number of failures is %d\n",count);
    }else{
        printf("Average is 0\n");
    }

    return 0;
    
}