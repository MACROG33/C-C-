#include<stdio.h>
int main()
{
    int n,sumS,sumM,sumL,MoneyS,MoneyM,MoneyL;
    float Money,Profit;
    char Size;
    printf("N:");
    scanf("%d",&n);
    sumS=0;
    sumM=0;
    sumL=0;
    for(int i=0;i<n;i++)
    {
        printf("Size:");
        scanf(" %c",&Size);
        if(Size=='S'||Size=='s')
        {
            sumS+=1;

        }
        else if(Size=='M'||Size=='m')
        {
            sumM+=1;

        }
        else if(Size=='L'||Size=='l')
        {
            sumL+=1;

        }
    }
    MoneyS=sumS*15;
    MoneyM=sumM*20;
    MoneyL=sumL*25;
    Money=MoneyS+MoneyM+MoneyL;
    Profit=(float)Money-((sumS*11.25)+(sumM*15.50)+(sumL*19.75));
    printf("S= %d\tM= %d\tL= %d\t\nMoney= %.2f THB.\nProfit= %.2f THB.\n",sumS,sumM,sumL,Money,Profit);

    return 0;
}
