#include<stdio.h>
int main()
{
    int bonus;
    float percent_mom,mom,son1,son2;

    printf("Bonus: ");
    scanf("%d",&bonus);
    printf("Percent: ");
    scanf("%f",&percent_mom);

    mom=(float)percent_mom/100*bonus;
    son1=(float)65/100*(bonus-mom);
    son2=(float)35/100*(bonus-mom);
    printf("mom: %.2f\nSon1: %.2f\nSon2: %.2f\n",mom,son1,son2);
    return 0;
}
