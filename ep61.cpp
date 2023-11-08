#include<stdio.h>
int main()
{
    int n,result;
    printf("Input N: ");
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        result=n*i;
        printf("%d x %d= %d\n",n,i,result);
    }
    return 0;
}
