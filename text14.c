#include<stdio.h>
int main(void){
    int n,k;
    int r,w,b;
    int count=0;
    scanf("%d%d",&n,&k);
    for(r=1;r<=n;r++){
        for(b=1;b<=n;b++){
            w=k-r-b;
            if(w<=n && w>=1){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}