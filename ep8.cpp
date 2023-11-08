#include<stdio.h>
int main()
{
    int x,y;
    int remainS;
    int remainM;
    float s;
    float m;

    //input
    printf("Input your Both_S:");
    scanf("%d",&x);
    printf("Input your Both_M:");
    scanf("%d",&y);
    //process
    remainS = x%6;
    s = (float)(x-remainS)/6;
    remainM = x%4;
    m = (float)(y-remainM)/4;
    //output
    printf("RemainS = %d \n s = %.2f \n RemainM = %d \n m = %.2f \n",remainS,s,remainM,m);

    return 0;

}
