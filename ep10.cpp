#include<stdio.h>
int main()
{
    float totalPrice,coupon,totalValue,Remain100,coupon100,Remain10,coupon10;

    printf("Input your TotalPrice:");
    scanf("%f",&totalPrice);

    coupon = (float)13/100*totalPrice;

    if(coupon>=5000)
    {
        totalValue = 2.5/100*totalPrice;
        Remain100  = (int)coupon%100;
        coupon100  = (coupon-Remain100)/100;
        Remain10   = (int)Remain100%10;
        coupon10   = (Remain100-Remain10)/10;
        printf("totalValue = %.2f \ncoupon100 = %.2f \ncoupon10 = %.2f",totalValue,coupon100,coupon10);
    }

    return 0;
}
