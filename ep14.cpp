#include<stdio.h>
main()
{
    int W,L,fence;
    float wallFence;
    scanf("%d",&W);
    scanf("%d",&L);
    fence=2*(W+L)-3;
    wallFence=(W*2.5+L*2.5)*2-(3*2.5);

    printf("%d\n%f\n,",fence,wallFence);
}
