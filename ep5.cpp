#include<stdio.h>
int main()
{
    int f1,f2,f3,n1,n2,n3;
    int income;
    //input
    printf("Input your Food:");
    scanf("%d",&f1);
    printf("Input your quantity Food:");
    scanf("%d",&n1);
    printf("Input your Drink:");
    scanf("%d",&f2);
    printf("Input your quantity Drink:");
    scanf("%d",&n2);
    printf("Input your fruit:");
    scanf("%d",&f3);
    printf("Input your quantity fruit:");
    scanf("%d",&n3);
    //process
    income = (f1*n2)+(f2*n2)+(f3*n3);
    //output
    printf("Price: %d",income);


    return 0;
}
