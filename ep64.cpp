#include<stdio.h>
int main()
{
    int number,sumPositive,sumNegative,sumZero;

    sumPositive=0;
    sumNegative=0;
    sumZero=0;
    for(;number!=-999;)
    {
        printf("Number: ");
        scanf("%d",&number);
        if(number>0)
        {
            sumPositive+=1;
        }
        if(number<0&&number!=-999)
        {
            sumNegative+=1;
        }
        if(number==0)
        {
            sumZero+=1;
        }
    }
    printf("Positive: %d\nNegative: %d\nZero: %d\n",sumPositive,sumNegative,sumZero);
    return 0;
}
