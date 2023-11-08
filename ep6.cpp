#include<stdio.h>
int main()
{
    int W,L,H;
    int area;
    int Remain;
    int air;

    printf("Intput you W:");
    scanf("%d",&W);
    printf("Intput you L:");
    scanf("%d",&L);
    printf("Intput you H:");
    scanf("%d",&H);

    area = W*L*H;
    Remain = area%20;
    air = (area - Remain)/20;

    printf("area = %d \n air = %d \n",area,air);

    return 0;
}
