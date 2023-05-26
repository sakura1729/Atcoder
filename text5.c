#include<stdio.h>
int main(void){
    int n,s,k,sum;
    sum=0;
    scanf("%d%d",&n,&s);
    for(int i=1;i<=n;i++){
        k=1;
        while(i+k<=s){
            k++;
            sum++;
            if(k>n)break;
        }
    }
    printf("%d",sum);
    return 0;
}