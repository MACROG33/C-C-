#include<stdio.h>
int main()
{
    int x,grade,credit,N,sumGrade,sumCredit,TotalGrade;//เคาเตอร์
    float avg;
    x=1;
    sumCredit=0;
    TotalGrade=0;
    printf("N:");
    scanf("%d",&N);

    while(x<=N)
    {
        printf("Grade:");
        scanf("%d",&grade);
        printf("Credit:");
        scanf("%d",&credit);
        sumGrade=grade*credit;
        sumCredit=sumCredit+credit;
        TotalGrade=TotalGrade+sumGrade;
        x++;
    }
    avg=(float)TotalGrade/sumCredit;
    printf("GPAX = %.2f",avg);
    return 0;
}
