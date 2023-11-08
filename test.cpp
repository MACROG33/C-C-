#include<stdio.h>
#include<math.h>
int main()
{
    int n,sumScore,sumGradeA,sumGradeB,sumGradeC,sumGradeD,sumGradeF;
    float sumSubtP2,avg,varian,sqrVarian;

    printf("N:");
    scanf("%d",&n);

    int score[n]={};
    float subt[n]={};
    float subP2[n]={};
    




    for(int i=0;i<n;i++)
    {
        printf("Score: ");
        scanf("%d",&score[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",score[i]);
    }
    printf("\n");
    sumGradeA=0;
    sumGradeB=0;
    sumGradeC=0;
    sumGradeD=0;
    sumGradeF=0;
    for(int i=0;i<n;i++)
    {
        if(score[i]>=80)
        {
            sumGradeA++;
        }
        else if(score[i]>=70)
        {
            sumGradeB++;
        }
        else if(score[i]>=60)
        {
            sumGradeC++;
        }
        else if(score[i]>=50)
        {
            sumGradeD++;
        }
        else
        {
            sumGradeF++;
        }
    }
    sumScore=0;
    for(int i=0;i<n;i++)
    {
        sumScore+=score[i];
    }
    avg=(float)sumScore/n;
    printf("\nSum: %d\nAvg: %.3f\n",sumScore,avg);
    for(int i=0;i<n;i++)
    {
        subt[i]=score[i]-avg;
        printf("%.3f\t",subt[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        subP2[i]=subt[i]*subt[i];
        printf("%.3f\t",subP2[i]);
    }
    sumSubtP2=0;
    for(int i=0;i<n;i++)
    {
        sumSubtP2+=subP2[i];
    }
    printf("\nsum: %.2f\n",sumSubtP2);
    varian=(float)sumSubtP2/(n-1);
    printf("Varian: %.1f\n",varian);
    sqrVarian=sqrt(varian);
    printf("SD: %.3f\n",sqrVarian);
    printf("A\t%d",sumGradeA);
    for (int i = 0; i < sumGradeA; i++) {
        printf("*");
    }
    printf("\nB\t%d",sumGradeB);
    for (int i = 0; i < sumGradeB; i++) {
        printf("*");
    }
    printf("\nC\t%d",sumGradeC);
    for (int i = 0; i < sumGradeC; i++) {
        printf("*");
    }
    printf("\nD\t%d",sumGradeD);
    for (int i = 0; i < sumGradeD; i++) {
        printf("*");
    }
    printf("\nF\t%d",sumGradeF);
    for (int i = 0; i < sumGradeF; i++) {
        printf("*");
    }




    return 0;
}
