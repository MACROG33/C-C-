#include<stdio.h>
int main()
{
    int egg,weightEgg,x,totalM,sizeS,sizeM,sizeL;//เคาร์เตอร์
    float totalL,totalS,Money;
    x=1;
    sizeL=0;
    sizeM=0;
    sizeS=0;
    printf("Egg:");
    scanf("%d",&egg);
    while(x<=egg)
    {
        printf("WeightEgg:");
        scanf("%d",&weightEgg);
        if(weightEgg>45)
        {
            printf("L\n");
            sizeL=sizeL+1;
        }
        else if(weightEgg>=30)
        {
            printf("M\n");
            sizeM=sizeM+1;
        }
        else
        {
            printf("S\n");
            sizeS=sizeS+1;
        }
        x++;
    }
    totalL=sizeL*4.50;
    totalM=sizeM*4;
    totalS=sizeS*3.25;
    Money=totalL+totalM+totalS;
    printf("S=%d\nL=%d\nM=%d\nMoney=%.2f\n",sizeS,sizeL,sizeM,Money);
    return 0;
}
