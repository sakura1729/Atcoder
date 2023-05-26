#include<bits/stdc++.h>
using namespace std;
int n;
int A[100005],B[100005];
int dp[100005];
vector<int> Answer;
int main(){
    cin >> n;
    for(int i=2;i<=n;i++)cin >> A[i];
    for(int i=3;i<=n;i++)cin >> B[i];
    dp[1]=0;
    dp[2]=A[2];
    for(int i=3;i<=n;i++)dp[i]=min(dp[i-1]+A[i],dp[i-2]+B[i]);
    int Place=n;
    while(true){
        Answer.push_back(Place);
        if(Place==1)break;
        if(dp[Place-1]+A[Place]==dp[Place])Place--;
        else Place -=2;
    }
    reverse(Answer.begin(),Answer.end());
    cout << Answer.size() << endl;
    for(int x: Answer) cout << x << " ";
}