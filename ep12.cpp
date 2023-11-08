#include<stdio.h>
int main()
{
    int h,d,R,areacircal,areapool,F,H,M,S;

    printf("Input your Height:");
    scanf("%d",&h);

    R=d/2;
    areacircal=22/7*R*R;
    areapool=areacircal*h;
    F=areapool/10;
    H=(F-(F%3600))/3600;
    S=(F-(H*3600))%60;
    M=(F-(H*3600)-S)/60;

    printf("%d %d %d",H,M,S);
    return 0;
}
