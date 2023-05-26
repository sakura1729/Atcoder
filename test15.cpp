#include<bits/stdc++.h>
using namespace std;
int h,w,A[105][105];
string S[105],moji;
int main(){
    cin >> h >> w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++)cin >> A[i][j];
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(A[i][j]==0){
                S[i]+='.';
            }
            else{
                S[i]+='A'+(A[i][j]-1);
            }
        }
    }
    for(string x : S)cout << x << endl;
}