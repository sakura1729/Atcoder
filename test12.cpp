#include<bits/stdc++.h>
using namespace std;
long long N,W,w[105],v[105];
long long dp[105][100005];
int main(){
    cin >> N >> W;
    for(int i=1;i<=N;i++)cin >> w[i] >> v[i];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++)dp[i][j]=0;
    }
    for(int i=1;i<=N;i++){
        for(int j=0;j<=W;j++){
            if(w[i]>j)dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}