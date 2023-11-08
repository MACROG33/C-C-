#include<stdio.h>
int main()
{
    int riceTon,moistrue,money,totalMoney;
    printf("RiceTon: ");
    scanf("%d",&riceTon);
    printf("Moisture: ");
    scanf("%d",&moistrue);
    if(moistrue<0.7)
    {
        money=riceTon*18000;
    }
    else if(moistrue<1)
    {
        money=riceTon*15500;
    }
    else if(moistrue<2)
    {
        money=riceTon*10500;
    }
    else if(moistrue>2)
    {
        money=riceTon*8000;
    }
    totalMoney=money-(riceTon*5);
    printf("Moistrue: %d Bath.\nTotalMoney: %d Bath.\n\n",money,totalMoney);
    return 0;
}
