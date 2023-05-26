#include<stdio.h>
void prime(unsigned long x);
void main(void){
    unsigned long n;
    scanf("%lu",&n);
    if(n==2){
        printf("Yes");
    }
    else if (n%2==0)
    {
        printf("No");
    }
    else{
        prime(n);
    }
}
void prime(unsigned long x){
    int flag=0;
    for(int i=3;i<x;i=i+2){
        if(x%i==0){
            printf("No");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Yes");
    }
}