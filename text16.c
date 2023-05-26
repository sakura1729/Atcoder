#include<stdio.h>
int main(void){
    int d,n;
    scanf("%d",&d);
    scanf("%d",&n);
    int D[d+1];
    int L[n],R[n];
    for(int i=1;i<=d;i++){
        D[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d%d",&L[i],&R[i]);
    }
    for(int t=0;t<n;t++){
        for(int s=L[t];s<=R[t];s++){
            D[s]++;
        }
    }
    for(int i=1;i<=d;i++){
        printf("%d\n",D[i]);
    }
    return 0;
}