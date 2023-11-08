#include<stdio.h>
int main()
{
    int weight,sizeL,sizeM,sizeS;//ดัมมี่
    float totalL,totalS,totalM,Money;
    sizeL=0;
    sizeM=0;
    sizeS=0;
    printf("WeightEgg:");
    scanf("%d",&weight);
    while(weight>0&&weight<=100)
    {
        if(weight>45)
        {

            sizeL=sizeL+1;
        }
        else if(weight>=30)
        {

            sizeM=sizeM+1;
        }
        else
        {

            sizeS=sizeS+1;
        }
        printf("WeightEgg:");
        scanf("%d",&weight);
    }
    totalL=(float)sizeL*4.50;
    totalM=sizeM*4;
    totalS=(float)sizeS*3.25;
    Money=totalL+totalM+totalS;
    printf("S=%d\nM=%d\nL=%d\nMoney=%.2f\n",sizeS,sizeM,sizeL,Money);


    return 0;
}
