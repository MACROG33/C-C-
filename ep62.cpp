#include<stdio.h>
int main()
{
    int n,sum;
    printf("N: ");
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<n;i++)
    {
        sum+=i;
        printf("%d+%d=%d\n",sum,i+1,sum+i+1);
    }
    return 0;
}
