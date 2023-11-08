#include<stdio.h>
int main()
{
    int sumCredit,sumGrade,grade,credit,sum;
    float result;
    sumCredit=0;
    sumGrade=0;

    printf("Grade: ");
    scanf("%d",&grade);
    printf("Credit: ");
    scanf("%d",&credit);
    for(;grade>0&&credit>0;)
    {
        sum=grade*credit;
        sumGrade+=sum;
        sumCredit=sumCredit+credit;
        printf("Grade: ");
        scanf("%d",&grade);
        printf("Credit: ");
        scanf("%d",&credit);
    }
    result=(float)sumGrade/sumCredit;
    printf("GPAX: %.2f\n",result);
    return 0;
}
