#include<stdio.h>
int main()
{
    int i=0,k,num;
    float sum,avg;
    printf("please input kon:");
    scanf("%d",&num);
    float number[num];
    sum=0;
    do{
        printf("please input number:[%d]",i+1);
        scanf("%f",&number[i]);
        i++;
    }while(i<num);
    for(k=num-1;k>=0;k--)
    {
        sum=sum+number[k];
        printf("%f\n",number[k]);
    }

    avg=(float)sum/num;
    printf("\n Average = %.2f\n",avg);
}
