#include<stdio.h>
int main(){
    int score;
    char x;
    for(int i=1;score!=-999;i++){
        printf("Score: ");
        scanf("%d",&score);
        if(score>=80){
            printf("A\n");
        }
        else if(score>=70){
            printf("B\n");
        }
        else if(score>=60){
            printf("C\n");
        }
        else if(score>=50){
            printf("D\n");
        }
        else{
            printf("F\n");
        }
       
    }
   
}