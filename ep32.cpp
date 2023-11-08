#include<stdio.h>
int main()
{
    int i;
    char *x;
    float Height,Weight,avgWeight,Reference,WeightCount;
    WeightCount=0;
    printf("Height:");
    scanf("%f",&Height);
    for(i=1;i<=7;i++)
    {
        printf("Weight:");
        scanf("%f",&Weight);
        WeightCount+=Weight;
        avgWeight=(float)WeightCount/7;
        Reference=(float)Height-avgWeight;
        if(Reference>110)
        {
            x="THIN";
        }
        else if(Reference>=100)
        {
            x="SLENDER";
        }
        else
        {
            x="FAT\n";
        }

    }
    printf("Height = %.2f\nAverage weight = %.2f\nReference weight = %.2f\n%s\n",Height,avgWeight,Reference,x);
    return 0;
}
