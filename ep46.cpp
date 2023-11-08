#include<stdio.h>
int main()
{
    int weight,sumS,sumM,sumL;
    float MoneyS,MoneyL,Money;
    printf("EggWeight: ");
    scanf("%d",&weight);
    sumS=0;
    sumM=0;
    sumL=0;
    for(;weight>0&&weight<100;)
    {
        if(weight<30)
        {
            printf("S\n");
            sumS+=1;
        }
        else if(weight>=30&&weight<=45)
        {
            printf("M\n");
            sumM+=1;
        }
        else
        {
            printf("L\n");
            sumL+=1;
        }
        printf("EggWeight: ");
        scanf("%d",&weight);
    }
    MoneyS=(float)sumS*3.25;
    MoneyM=sumM*4;
    MoneyL=(float)sumL*4.50;
    Money=MoneyS+MoneyM+MoneyL;
    printf("S: %d\nM: %d\nL: %d\nMoney: %.2f\n");
    return 0;
}
