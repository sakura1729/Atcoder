#include<stdio.h>
int main(void){
    int n,s;
    s=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        s+=A[i];
    }
    printf("%d",s);
}