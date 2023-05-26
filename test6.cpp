#include<bits/stdc++.h>
using namespace std;
int x,n;
int search(int);
int A[100005];
int main(){
    cin >> n >> x;
    for(int i=1;i<=n;i++)cin >>  A[i];
    int answer=search(x);
    cout << answer << endl;
    return 0;
}
int search(int x){
    int L=1,R=n;
    while(L<=R){
        int M=(L+R)/2;
        if(x < A[M])R=M-1;
        if(x == A[M])return M;
        if(x > A[M])L=M+1;
    }
    return -1;
}