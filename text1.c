#include<stdio.h>
long kaijo(int);
void main(void){
   int n,k;
   scanf("%d",&k);
   for(n=0;n<=k;n++){
      printf("%ld\n",kaijo(n));
   }
}
long kaijo(int n){
   if(n==0)return 1;
   else return n*kaijo(n-1);
}