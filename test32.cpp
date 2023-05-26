#include<bits/stdc++.h>
using namespace std;
int n,x,m;
int p=0;
vector<int>A;
vector<int>B;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++)cin >> A[i];
    cin >> m;
    for(int i=1;i<=m;i++)cin >> B[i];
    cin >> x;
    for(int i=1;i<=n;i++){
        if(find(B.begin(),B.end(),A[i])==B.end()){
            p+=A[i];
        }
    }
}