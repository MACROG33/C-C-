#include<stdio.h>
int main()
{
    int n=5;
    int x[n]={};

    for(int i=0;i<5;i++)
    {
        printf("%d.",i+1);
        scanf("%d",&x[i]);
    }
    printf("========================\n");
    for(int i=0;i<n;i++)
    {

        printf("%d\n",x[i]);
    }
    return 0;
}
