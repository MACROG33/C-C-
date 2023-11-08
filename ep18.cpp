#include<stdio.h>
main()
{
    int age,pay;
    char gender;
    scanf("%d",&age);
    scanf(" %c",&gender);

    if(gender=='M')
    {
        if(age>=18&&age<=30)
        {
            pay=15+30;
        }
    }
    else
    {
        pay=15;
        printf("%d\n",pay);
    }

    else if(gender=='F')
        {
        if(age>=18&&age<=30)
        {
            pay=10+20;
            printf("%d\n",pay);
        }
        else
        {
            pay=10;
            printf("%d\n",pay);

        }

    else
    {
        printf("GENDER = M/F");
    }

