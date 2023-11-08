#include<stdio.h>
int main()
{
    int n,sum,x,number;//เคาร์เตอร์
    float avg;
    x=1;
    sum=0;
    printf("N:");
    scanf("%d",&n);
    while(x<=n)
    {
        printf("number:");
        scanf("%d",&number);
        sum=sum+number;

        x++;
    }
    avg=(float)sum/n;
    printf("Total = %d\navg = %.2f\n",sum,avg);
    return 0;
}
