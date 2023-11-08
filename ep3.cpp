#include<stdio.h>
int main()
{
    int Radius;
    float result;
    //input
    printf("Input your Radius:");
    scanf("%d",&Radius);
    //process
    result=(float)2*22/7*Radius;
    //output
    printf("C=%.3f",result);

    return 0;
}
