#include<bits/stdc++.h>
using namespace std;
int n,q;
int QueryType[500005],x[500005];
int main(){
    cin >> n >> q;
    for(int i=1;i<=q;i++){
        cin >> QueryType[i];
        if(QueryType[i]==2)cin >> x[i];
    }
    set<int>called;
    int k=0;
    for(int i=1;i<=q;i++){
        if(QueryType[i]==1){
            k++;
            called.insert(k);
        }
        if(QueryType[i]==2){
            called.erase(x[i]);
        }
        if(QueryType[i]==3){
            cout << *(called.begin()) << endl;
        }
    }
}