#include<stdio.h>
int main()
{
    int n,quiz,sumQuiz;
    float avg;
    char x;
    n=4;
    sumQuiz=0;
    for(int i=1;i<=n;i++)
    {
        printf("Quiz:");
        scanf("%d",&quiz);
        sumQuiz+=quiz;
        if(sumQuiz>50)
        {
            x='S';
        }
        else
        {
            x='U';
        }

    }
    avg=(float)sumQuiz/n;
    printf("TotalScore:%d\nGrade:%c\nScoreAverage:%.2f\n",sumQuiz,x,avg);
    return 0;
}
