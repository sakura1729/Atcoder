#include<bits/stdc++.h>
using namespace std;
int n,m,C[15],A[15][15];
int main(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> C[i];
        for(int j=1;j<=C[i];j++)cin >> A[i][j];
    }
    int ans=0;
    for(int i=0;i<(1<<m);i++){
        set<int>s;
        for(int j=0;j<m;j++){
            if((i>>j) & 1){
                for(int l=1;l<=C[j+1];l++){
                    s.insert(A[j+1][l]);
                    }
            }
        }
        ans+=s.size()==n;
    }
    cout << ans <<endl;
}