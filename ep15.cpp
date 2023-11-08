#include<stdio.h>
main()
{
    float liter,allincome,vat,balance;

    scanf("%f",&liter);
    scanf("%f",&allincome);

    vat=(1.5/100*liter)+(12.5/100*allincome);
	balance=allincome-vat;

	printf("%.2f\n%.2f\n",vat,balance);

}
