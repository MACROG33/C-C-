#include<stdio.h>
int main()
{
    int n,max,min,sum,sizeS,sizeM,sizeL;
    float avg;
    printf("Egg N:");
    scanf("%d",&n);
    int egg[n]={};
    sum=0;
    for(int i=0;i<n;i++)
    {
        printf("WeightEgg:");
        scanf("%d",&egg[i]);
        sum+=egg[i];
    }
    sizeL=0;
    sizeM=0;
    sizeS=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",egg[i]);
        if(egg[i]>375)
        {
            printf("Large size\n");
            sizeL+=1;
        }
        else if(egg[i]>=250)
        {
            printf("Medium size\n");
            sizeM+=1;
        }
        else
        {
            printf("Small size\n");
            sizeS+=1;
        }
    }
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
    avg=(float)sum/n;
    printf("Max= %d\nMin= %d\nAvg= %.2f\nSmall=\t%d\nMedium=\t%d\nLarge=\t%d\n",max,min,avg,sizeS,sizeM,sizeL);

    return 0;
}
