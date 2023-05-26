#include<stdio.h>
int main(void){
    int a,b,c;
    char s[101];
    scanf("%d%d%d",&a,&b,&c);
    scanf("%s",s);
    printf("%d %s",a+b+c,s);
    return 0;
}