#include<stdio.h>
int main(void){
    int h,w;
    scanf("%d%d",&h,&w);
    int X[h+1][w+1];
    int Z[h+1][w+1];
    for(int i=0;i<=h;i++){
        for(int j=0;j<=w;j++){
            Z[i][j]=0;
        }
    }
    for(int i=1;i<=h;i++){
        for(int k=1;k<=w;k++){
            scanf("%d",&X[i][k]);
        }
    }
    int q;
    scanf("%d",&q);
    int A[q],B[q],C[q],D[q];
    for(int i=0;i<q;i++){
        scanf("%d%d%d%d",&A[i],&B[i],&C[i],&D[i]);
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            Z[i][j]=Z[i][j-1]+X[i][j];
        }
    }
    for(int j=1;j<=h;j++){
        for(int i=1;i<=w;i++){
            Z[i][j]=Z[i-1][j]+Z[i][j];
        }
    }
    for(int i=0;i<q;i++){
        printf("%d\n",Z[C[i]][D[i]]+Z[A[i]-1][B[i]-1]-Z[A[i]-1][D[i]]-Z[C[i]][B[i]-1]);
    }
    return 0;
}