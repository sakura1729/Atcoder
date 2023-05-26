#include<bits/stdc++.h>
using namespace std;
long long a,b,m;
long long n=0;
int main(){
    cin >> a >> b;
    if(a>=b){
        m=a;
        a=b;
        b=m;
    }
    while(true){
        if(a==b){
            n=0;
            break;
        }
        if(b%a==0){
            n+=(b/a)-1;
            break;
        }
        n+=(b/a);
        b=b%a;
        if(a%b==0){
            n+=(a/b)-1;
            break;
        }
        n+=(a/b);
        a=a%b;
    }
    cout << n << endl;
    return 0;
}