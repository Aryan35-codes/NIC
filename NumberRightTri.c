#include<stdio.h>

int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);

    for(int i=1;i<n+1;i++){ //rows
        for(int j=1;j<=i;j++){ // columns
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}