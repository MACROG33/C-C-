#include<stdio.h>
main()
{
    float num1,num2,num3,x1,x2,x3;
    printf("Please input you num1:");
    scanf("%f",&num1);
    printf("Please input you num2:");
    scanf("%f",&num2);
    printf("Please input you num3:");
    scanf("%f",&num3);

    if(num1>=num2&&num1>=num3)
        {
            x1=num1;
        }
    if(num2>=num1&&num2>=num3)
        {
            x2=num2;
        }
    if(num3>=num1&&num2>=3)
        {
            x3=num3;
        }
    printf("num1=%.2f\nnum2=%.2f\nnum3=%.2f\n",x1,x2,x3);
}
