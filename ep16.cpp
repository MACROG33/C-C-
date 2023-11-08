#include<stdio.h>
main()
{
    int x,y,area,designFee;

    printf("Please Input your X:");
    scanf("%d",&x);
    printf("Please Input your Y:");
    scanf("%d",&y);

    area=x*y;
    if(area<150)
    {
        x=50;
    }
    else
    {
        x=100;
    }
    designFee=area*x;
    printf("area=%d\ndesignFee=%d\n",area,designFee);
}
