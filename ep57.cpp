#include<stdio.h>
#include<math.h>
int main()
{
    float S,L;
    float H;
    printf("S:");
    scanf("%f",&L);
    printf("L:");
    scanf("%f",&S);
    H=(float)sqrt((S*S)-((L/2)*(L/2)));
    printf("H=%.2f\n",H);
    return 0;
}
