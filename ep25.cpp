#include<stdio.h>
int main()
{
    int grade,credit,sumGrade,sumCredit,GradeTotal;//ดัมมี่
    float avg;
    sumCredit=0;
    GradeTotal=0;
    printf("Input AvgGrade:");
    scanf("%d",&grade);
    printf("Input Credit:");
    scanf("%d",&credit);
    while(grade>0&&credit>0)
    {
        sumGrade=grade*credit;
        sumCredit=sumCredit+credit;
        GradeTotal=GradeTotal+sumGrade;
        printf("Input AvgGrade:");
        scanf("%d",&grade);
        printf("Input Credit:");
        scanf("%d",&credit);
    }
    avg=(float)GradeTotal/sumCredit;
    printf("GPAX = %.2f",avg);

    return 0;
}
