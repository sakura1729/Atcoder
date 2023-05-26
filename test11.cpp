#include<bits/stdc++.h>
using namespace std;
long long N,W,w[105],v[105];
long long dp[105][100005];
int main(){
    cin >> N >> W;
    for(int i=0;i<N;i++)cin >> w[i] >> v[i];
    for(int i=0;i<=W;i++)dp[0][i]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j>=w[i])dp[i+1][j]=max(dp[i][j-w[i]]+v[i],dp[i][j]);
            else dp[i+1][j]=dp[i][j];
        }
    }
    cout << dp[N][W] << endl;
}

