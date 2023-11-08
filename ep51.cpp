#include<stdio.h>
int main()
{
    int n,sum,sumNum;
    float avg;
    scanf("%d",&n);
    sum=0;
    sumNum=0;
    for(;n!=0;)
    {
        if(n>0)
        {
            sumNum+=1;
            sum+=n;

        }
        scanf("%d",&n);
    }
    avg=(float)sum/sumNum;
    printf("Sum of positive = %d\nAverage of positive = %.2f\n",sum,avg);
    return 0;
}
