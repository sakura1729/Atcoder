#include<stdio.h>
int main(void){
    int A[6],B[7];
    B[0]=0;
    for(int i=0;i<6;i++){
        scanf("%d",&A[i]);
    }
    for(int i=1;i<=6;i++){
        B[i]=B[i-1]+A[i-1];
    }
    return 0;
}