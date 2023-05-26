#include<stdio.h>
int prime(int x);
int main(void){
    int n;
    scanf("%d",&n);
    prime(n);
}
int prime(int x){
    int flag;
    for(int i=2;i<=x;i++){
        flag=0;
        for(int k=2;k<i;k++){
            if(i%k==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}