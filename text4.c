#include<stdio.h>
int lcm(int x,int y);
int main(void){
    int a,b,c,n,s;
    scanf("%d%d%d",&n,&a,&b);
    c=lcm(a,b);
    s=(n/a)+(n/b)-(n/c);
    printf("%d",s);
    return 0;
}
int lcm(int x,int y){
    int k=x*y;
    int r=x%y;
    while (r!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }
    return k/y;
}