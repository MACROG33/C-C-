#include<stdio.h>
int main()
{
    int num,sumNum,sum;
    float avg;
    printf("Number: ");
    scanf("%d",&num);
    sumNum=0;
    sum=0;
    for(;num>0;)
    {
        sumNum+=num;
        sum+=1;
        printf("Number: ");
        scanf("%d",&num);
    }
    avg=(float)sumNum/sum;
    printf("Result: %d\nAverage: %.2f\n",sumNum,avg);
    return 0;
}
