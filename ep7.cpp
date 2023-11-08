#include<stdio.h>
int main()
{
    int s,m,l,s1,m2,l3;
    int Price;
    //input
    printf("Input your Price_S:");
    scanf("%d",&s);
    printf("S sizeSold in:");
    scanf("%d",&s1);
    printf("Input your Price_M:");
    scanf("%d",&m);
    printf("M size Sold in:");
    scanf("%d",&m2);
    printf("Input your Price_L:");
    scanf("%d",&l);
    printf("L size Sold in:");
    scanf("%d",&l3);
    //process
    Price = (s*s1)+(m*m2)+(l*l3);
    //output
    printf("Price: %d",Price);


    return 0;
}
