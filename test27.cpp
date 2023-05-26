#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int,int>>used({{0,0}});
    int x=0,y=0;
    for(char i:s){
        if(i=='R')x++;
        if(i=='L')x--;
        if(i=='U')y++;
        if(i=='D')y--;
        if(used.find({x,y})!=used.end()){
            cout << "Yes" <<endl;
            return 0;
        }
        used.insert({x,y});
    }
    cout << "No" <<endl;
    return 0;
}