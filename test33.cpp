#include<bits/stdc++.h>
using namespace std;
int n,h[100005],dp[100005];
int main(){
    cin >> n;
    for(int i=0;i<=n;i++)dp[i]=1000000000;
    dp[0]=0;
    for(int i=1;i<=n;i++)cin >> h[i];
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=min(dp[i-2]+abs(h[i]-h[i-2]),dp[i-1]+abs(h[i]-h[i-1]));
    }
    cout << dp[n];
}
