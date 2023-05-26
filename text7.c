#include<stdio.h>
unsigned long kaijo(unsigned int x);
int main(void){
    unsigned int n;
    scanf("%u",&n);
    printf("%lu",kaijo(n));
}
unsigned long kaijo(unsigned int x){
    if(x<=0){
        return 1;
    }
    return x*kaijo(x-1); 
}