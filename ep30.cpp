#include<stdio.h>
int main()
{
    int n,x,year,old,ageChild,ageYoung,ageAdult,ageOld,MoneyOld,MoneyAdult,MoneyYoung,MoneyChild,totalMoney;
    x=1;
    ageOld=0;
    ageAdult=0;
    ageChild=0;
    ageYoung=0;
    printf("N:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        printf("Year:");
        scanf("%d",&year);
        old=2566-year;
        if(old>59)
        {
            printf("Old\n");
            ageOld+=1;
        }
        else if(old>=19)
        {
            printf("Adult\n");
            ageAdult+=1;
        }
        else if(old>=12)
        {
            printf("Young\n");
            ageYoung+=1;
        }
        else
        {
            printf("Child\n");
            ageChild+=1;
        }

    }
    MoneyChild=ageChild*2;
    MoneyYoung=ageYoung*3;
    MoneyAdult=ageAdult*4;
    MoneyOld=ageOld*5;
    totalMoney=MoneyAdult+MoneyChild+MoneyOld+MoneyYoung;
    printf("Child = %d\nYoung = %d\nAdult = %d\nOld = %d\nTotal = %d\n",ageChild,ageYoung,ageAdult,ageOld,totalMoney);



    return 0;
}
