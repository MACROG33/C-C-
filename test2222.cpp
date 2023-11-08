#include<stdio.h>

int main(){
    int n;
    printf("N:");
    scanf("%d",&n);

    int num[n]={};
    for(int i=0;i<n;i++){
        printf("NUM:");
        scanf("%d",&num[i]);
    }

    for(int i=1;i<=n;i++){
        printf("%d\t",i);
    }printf("\n------------------------------\n");

    int max;
    max=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    for(int i=1;i<=max+1;i++){
        for(int j=0;j<n;j++){
            if(i<=num[j]){
                printf("*\t");
            }
            else if(i==num[j]+1){
                printf("%d\t",num[j]);
            }
            else
            {
                    printf("\t");
            }
        }
        printf("\n");
    }

    return 0;

}
