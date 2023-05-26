#include<stdio.h>
int main(void){
    unsigned long n,q;
    unsigned long sum=0;
    scanf("%lu%lu",&n,&q);
    unsigned long A[n],L[q],R[q];
    for(unsigned long i=1;i<=n;i++){
        scanf("%lu",&A[i]);
    }
    for(unsigned long k=0;k<q;k++){
        scanf("%lu%lu",&L[k],&R[k]);
    }
    for(unsigned long m=0;m<q;m++){
        for(unsigned long x=L[m];x<=R[m];x++){
            sum+=A[x];
        }
        printf("%lu\n",sum);
        sum=0;
    }
    return 0;
}