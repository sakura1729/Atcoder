#include<bits/stdc++.h>
using namespace std;
long long n,d;
bool a=false;
long long T[105];
int main(){
    cin >> n >> d;
    for(int i=1;i<=n;i++)cin >> T[i];
    for(int i=1;i<n;i++){
        if(T[i+1]-T[i]<=d){
            cout << T[i+1];
            a=true;
            break;
        }
    }
    if(a==false)cout << -1;
}
