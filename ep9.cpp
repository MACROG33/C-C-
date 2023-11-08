#include<stdio.h>
int main()
{
    int x,y;
    int Bottle_S;
    int Bottle_M;
    int Money;
    //input
    printf("Input your BottleSizeS:");
    scanf("%d",&x);
    printf("Input your BottleSizeM:");
    scanf("%d",&y);
    //process
    Bottle_S = (x-(x%6))/6;
    Bottle_M = (y-(x%4))/4;
    Money    = (Bottle_S*120)+(Bottle_M*200)+(x%6*30)+(y%4*60);
    //output
    printf("Money = %d",Money);

    return 0;
}
