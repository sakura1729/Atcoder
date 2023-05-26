#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long n,m,A[100005],B[100005];
long long M,L,R;
int main(){
    cin >> n >> m;
    long long k=n+m;
    vector<long long>C(n+m+1);
    for(int i=1;i<=n;i++)cin >> A[i];
    for(int i=1;i<=m;i++)cin >> B[i];
    for(int i=1;i<=n+m;i++){
        if(i<=n)C[i]=A[i];
        else C[i]=B[i-n];
    }
    sort(C.begin(),C.end());
    for(int i=1;i<=n;i++){
        L=1;
        R=k;
        while(true){
            M=(L+R)/2;
            if(C[M]<A[i])L=M+1;
            if(C[M]==A[i]){
                cout << M << " ";
                break;
            }
            if(C[M]>A[i])R=M-1;
        }
    }
    cout << endl;
    for(int i=1;i<=m;i++){
        L=1;
        R=k;
        while(true){
            M=(L+R)/2;
            if(C[M]<B[i])L=M+1;
            if(C[M]==B[i]){
                cout << M << " ";
                break;
            }
            if(C[M]>B[i])R=M-1;
        }
    }
}