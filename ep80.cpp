#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Input n ==>> ");
    scanf("%d",&n);
    int grade[n],sum;
    char status_text[5]={'A', 'B', 'C', 'D', 'F'};
    float sum_sub2=0;
    for(int i=0; i<n; i++){
        printf("input Grade ==>> ");
        scanf("%d",&grade[i]);
        sum=sum+grade[i];
    }
    printf("sum ==>> %d\nAVG grade ==>> %.5f\nSub ==>> ",sum,(float)sum/n);
    for(int i=0; i<n; i++){
        printf("%.5f ",grade[i]-(float)sum/n);
    }
    printf("\nSub_2 ==>> ");
     int status[5]={0};
    for(int i=0; i<n; i++){
        printf("%.5f ",(grade[i]-(float)sum/n)*(grade[i]-(float)sum/n));
        sum_sub2=sum_sub2+(grade[i]-(float)sum/n)*(grade[i]-(float)sum/n);
        if(grade[i]>=80){
            status[0]=status[0]+1;
        }else if(grade[i]>=70){
            status[1]=status[1]+1;
        }else if(grade[i]>=60){
            status[2]=status[2]+1;
        }else if(grade[i]>=50){
            status[3]=status[3]+1;
        }else if(grade[i]<50){
            status[4]=status[4]+1;
        }
    }
    printf("\nSum_sub2 = %.4f\nVarian = %.4f\nSD = %.4f\n",sum_sub2,(float)sum_sub2/(n-1),sqrt((float)sum_sub2/(n-1)));
    for(int i=0;i<5;i++){
        printf("%c = %d\t",status_text[i],status[i]);
        for(int j=0;j<status[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
