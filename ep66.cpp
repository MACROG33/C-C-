#include<stdio.h>
int main()
{
    int Bonus;
    float mom,son;
    printf("Bonus: ");
    scanf("%d",&Bonus);
    mom=(float)30/100*Bonus;
    son=(float)(Bonus-mom)/3;
    printf("Mom: %.2f\nSon: %.2f",mom,son);
    return 0;
}
