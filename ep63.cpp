#include<stdio.h>
int main()
{
    int n,sumFar,sumMedium,sumNear,totalMoney;
    printf("Kon: ");
    scanf("%d",&n);
    int distance[n]={};
    sumFar=0;
    sumMedium=0;
    sumNear=0;
    for(int i=0;i<n;i++)
    {
        printf("Distance[KM]: ");
        scanf("%d",&distance[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(distance[i]>5)
        {
            sumFar+=1;
        }
        else if(distance[i]>2)
        {
            sumMedium+=1;
        }
        else
        {
            sumNear+=1;
        }
    }
    totalMoney=(sumFar*15)+(sumMedium*10)+(sumNear*5);
    printf("Near: %d kon\nMedium: %d kon\nFar: %d kon\nTotalMoney: %d Bath.\n",sumNear,sumMedium,sumFar,totalMoney);
    return 0;
}
