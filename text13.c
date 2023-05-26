#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int A[10]={};
    for(int i=9;i>=0;i--){
        A[i]=n%2;
        n=n/2;
    }
    for(int k=0;k<10;k++){
        printf("%d",A[k]);
    }
    printf("\n");
    return 0;
}