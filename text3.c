#include<stdio.h>
int main(void){
    int flag;
    for(int i=2;i<=30;i++){
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
}