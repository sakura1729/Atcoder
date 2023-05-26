#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n,d;
int A[100005],L[100005],R[100005],P[100005],Q[100005];
int main(){
    cin >> n;
    for(int i=1;i<=n;i++)cin >> A[i];
    cin >> d;
    for(int i=1;i<=d;i++)cin >> L[i] >> R[i];
    P[1]=A[1];
    for(int i=2;i<=n;i++)P[i]=max(P[i-1],A[i]);
    Q[n]=A[n];
    for(int i=n-1;i>=1;i--)Q[i]=max(Q[i+1],A[i]);
    for(int i=1;i<=d;i++){
        cout << max(P[L[i]-1],Q[R[i]+1]) << endl;
    }
}