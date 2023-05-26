#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')s.at(i)='1';
        else s.at(i)='0';
    }
    cout << s <<endl;
}