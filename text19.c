#include<stdio.h>
int main(void){
    int h,w,n;
    scanf("%d%d%d",&h,&w,&n);
    int A[n+2],B[n+2],C[n+2],D[n+2];
    for(int i=1;i<=n;i++){
        scanf("%d%d%d%d",&A[i],&B[i],&C[i],&D[i]);
    }
    int Z[h+1][w+1];
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            Z[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=A[i];j<=C[i];j++){
            for(int t=B[i];t<=D[i];t++){
                Z[j][t]++;
            }
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            printf("%d ",Z[i][j]);
        }
        printf("\n");
    }
    return 0;
}