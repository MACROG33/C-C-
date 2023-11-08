#include<stdio.h>
int main()
{
    int x;
    float money,AllMoney,increaseMoney,SavingMoney;
    x=1;
    SavingMoney=0;

    while(x<=12)
    {
        printf("money:");
        scanf("%f",&money);
        SavingMoney=(float)SavingMoney+money;
        increaseMoney=(float)1.25/100*SavingMoney;
        x++;

    }
    AllMoney=(float)SavingMoney+increaseMoney;
    printf("Saving money = %.2f THB.\nIncrease money = %.2f THB.\nAll money =%.2f THB.\n",SavingMoney,increaseMoney,AllMoney);

    return 0;
}
