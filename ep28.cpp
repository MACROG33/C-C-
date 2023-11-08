#include<stdio.h>
int main()
{
    int sum,number,totalNumber;//ดัมมี่
    float avg;
    sum=0;
    totalNumber=0;
    printf("Input Number:");
    scanf("%d",&number);
    while(number>0)
    {
        sum=sum+number;
        totalNumber=totalNumber+1;
        printf("Input Number:");
        scanf("%d",&number);
    }
    avg=(float)sum/totalNumber;
    printf("Total = %d\navg = %.2f\n",sum,avg);
    return 0;
}
