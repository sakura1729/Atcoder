#include<stdio.h>
int main(void){
    int n,x;
    int flag=0;
    scanf("%d%d",&n,&x);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int k=0;k<n;k++){
        if(A[k]==x){
            printf("Yes\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("No\n");
    }
    return 0;
}