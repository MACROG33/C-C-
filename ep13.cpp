#include<stdio.h>
int main()
{
    char year;
    printf("Please input your year:");
    scanf(" %c",&year);
    if(year=='1')
    {
        printf("You are Freshly");
    }
    else if(year=='2')
    {
        printf("You are Soophomore");
    }
    else if(year=='3')
    {
        printf("You are Junior");
    }
    else
    {
        printf("You are Senior");
    }

    return 0;
}
