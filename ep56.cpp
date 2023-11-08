#include<stdio.h>
int main()
{
    float bonus;
    float mom,L1,L2,p_mom;
    printf("Bonus:");
    scanf("%f",&bonus);
    printf("Percent:");
    scanf("%f",&p_mom);

    mom=(float)bonus-(bonus*(p_mom/100));
    L1=(float)65/100*(bonus-mom);
    L2=(float)35/100*(bonus-mom);
    printf("Mom=%.2f\nL1=%.2f\nL2=%.2f\n",mom,L1,L2);

    return 0;
}
