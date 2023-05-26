#include<bits/stdc++.h>
using namespace std;
int h,w;
string s[105];
int main(){
    cin >> h >> w;
    for(int i=1;i<=h;i++)cin >>s[i];
    for(int i=1;i<=h;i++){
        for(int j=0;j<w-1;j++){
            if(s[i].at(j)=='T' && s[i].at(j+1)=='T'){
                s[i].at(j)='P';
                s[i].at(j+1)='C';
            }
        }
    }
    for(int i=1;i<=h;i++)cout <<s[i] <<endl;
}