#include<bits/stdc++.h>
using namespace std;
int q;
int QueryType[100005];
string x[100005];
queue<string> T;
int main(){
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> QueryType[i];
        if(QueryType[i]==1)cin >> x[i];
    }
    for(int i=1;i<=q;i++){
        if(QueryType[i]==1)T.push(x[i]);
        if(QueryType[i]==2)cout << T.front() << endl;
        if(QueryType[i]==3)T.pop();
    }

}