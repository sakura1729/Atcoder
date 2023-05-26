#include<bits/stdc++.h>
using namespace std;
int n,m;
int result=0;
int s[15][15],k[15],p[15];
int main(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> k[i];
        for(int j=1;j<=k[i];j++)cin >> s[i][j];
    }
    for(int i=1;i<=m;i++)cin >> p[i];

    for(int i=0;i<(1<<n);i++){
        int a[15];
        for(int j=0;j<n;j++){
            a[j+1]=((i>>j) & 1);
        }
        bool t=true;
        for(int z=1;z<=m;z++){
            int sum=0;
            for(int m=1;m<=k[z];m++){
                if(a[s[z][m]]){
                    sum++;
                }
            }
            if(p[z]){
                if(sum%2==0){
                    t=false;
                }
            }
            else{
                if(sum%2==1){
                    t=false;
                }
            }
        }
        if(t)result++;
    }
    cout << result << endl;
}