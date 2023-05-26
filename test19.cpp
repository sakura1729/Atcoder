#include<bits/stdc++.h>
using namespace std;
int q;
int QueryType[100005];
int x[100005];
int main(){
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> QueryType[i];
        if(QueryType[i]==1)cin >> x[i];
    }
}