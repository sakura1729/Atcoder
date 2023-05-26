#include<bits/stdc++.h>
using namespace std;
long long n,q,A[100005],QueryType[100005];
vector<long long>s;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++)cin >> A[i];
    cin >> q;
    for(int i=1;i<=q;i++){
        long long k,x;
        cin >> QueryType[i];
        if(QueryType[i]==1){
            cin >> k >> x;
            A[k]=x;
        }
        else{
            cin >> k;
            s.push_back(A[k]);
        }
    }
    for(long long x : s){
        cout << x << endl;
    }
}