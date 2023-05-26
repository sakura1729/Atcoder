#include<bits/stdc++.h>
using namespace std;
string s;
char al;
bool k=false;
int main(){
    cin >> s;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=26;j++){
            al='A'+j-1;
            if(al==s[i]){
                cout << i+1 << endl;
                k=true;
                break;
            }
            if(k==true)break;
        }
    }
}