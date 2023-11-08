#include<stdio.h>
int main()
{
    int countt=3;
    int number[countt];
    float sum,avg;


    for(int i=0;i<countt;i++){
        printf("Enter Number%d:",i+1);
        scanf("%d",&number[i]);
    }
    for(int j=0;j<3;j++){
       sum=sum+number[j];
    }
    avg=sum/countt;
    printf("total = %.2f\nAverage = %.2f\n",sum,avg);
    return 0;
}
