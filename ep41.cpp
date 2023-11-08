#include<stdio.h>
int main()
{

    int n,num,sumNum;
    float avg;
    printf("N:");
    scanf("%d",&n);
    sumNum=0;
    for(int i=0; i<n;i++)
    {
        printf("Number: ");
        scanf("%d",&num);
        sumNum+=num;
    }
    printf("=============================\n");
    avg=(float)sumNum/n;
    printf("Result: %d\nAverage: %.2f\n",sumNum,avg);

    return 0;
}
