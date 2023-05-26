#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long A[100005];
bool check(long long x){
    long long sum=0;
    for(int i=1;i<=n;i++)sum+=x/A[i];
    if(sum>=k)return true;
    return false;
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++)cin >> A[i];
    long long left=1,right=1000000000;
    while(left<right){
        long long mid=(left+right)/2;
        bool answer=check(mid);
        if(answer==false)left=mid+1;
        if(answer==true)right=mid;
    }
    cout << left << endl;
    return 0;
}