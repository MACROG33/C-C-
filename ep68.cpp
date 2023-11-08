#include<stdio.h>
int main()
{
    int Grade,Credit,sum,sumGrade,sumCredit;
    float avg;
    sum=0;
    sumGrade=0;
    sumCredit=0;
    printf("Grade: ");
    scanf("%d",&Grade);
    printf("Credit: ");
    scanf("%d",&Credit);
    for(;Grade>0&&Credit>0;)
    {
        sum=Grade*Credit;
        sumGrade=sumGrade+sum;
        sumCredit=sumCredit+Credit;
        printf("Grade: ");
        scanf("%d",&Grade);
        printf("Credit: ");
        scanf("%d",&Credit);
    }
    avg=(float)sumGrade/sumCredit;
    printf("AVG: %.2f\n",avg);
    return 0;
}
