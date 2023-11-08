#include<stdio.h>
int main()
{
    int egg,weight,sumS,sumL,sumM,MoneyM;
    float money,MoneyS,MoneyL;

    printf("Egg: ");
    scanf("%d",&egg);
    sumL=0;
    sumM=0;
    sumS=0;
    for(int i=1;i<=egg;i++)
    {
        printf("Weight: ");
        scanf("%d",&weight);
        if(weight<30)
        {
            printf("S\n");
            sumS+=1;
        }
        else if(weight<=45)
        {
            printf("M\n");
            sumM+=1;
        }
        else
        {
            printf("L\n");
            sumL+=1;
        }
    }
    MoneyS=(float)sumS*3.25;
    MoneyM=sumM*4;
    MoneyL=(float)sumL*4.50;
    money=MoneyS+MoneyM+MoneyL;
    printf("======================\n");
    printf("S: %d\nM: %d\nL: %d\n",sumS,sumM,sumL);
    printf("Money: %.2f\n",money);





    return 0;
}
