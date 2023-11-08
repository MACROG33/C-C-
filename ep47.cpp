#include<stdio.h>
int main()
{
    int n,weight,sumS,sumM,sumL;
    printf("N: ");
    scanf("%d",&n);
    int egg[n]={};
    for(int i=0;i<n;i++)
    {
        printf("EggWeight: ");
        scanf("%d",&egg[i]);
    }
    sumS=0;
    sumM=0;
    sumL=0;
    for(int i=0;i<n;i++)
    {
        if(egg[i]>375)
        {
            printf("%d\tLarge size\n",egg[i]);
            sumL+=1;
        }
        else if(egg[i]>=250)
        {
            printf("%d\tMedium size\n",egg[i]);
            sumM+=1;
        }
        else
        {
            printf("%d\tSmall size\n",egg[i]);
            sumS+=1;
        }
    }
    int max,min;
    max=egg[0];
    min=egg[0];
    for(int i=0;i<n;i++)
    {
        if(egg[i]>max)
        {
            max=egg[i];
        }
        if(egg[i]<min)
        {
            min=egg[i];
        }
    }
    printf("Max: %d\nMin: %d\n",max,min);
    printf("SMALL: %d\nMEDIUM: %d\nLARGE: %d\n",sumS,sumM,sumL);


    return 0;
}
