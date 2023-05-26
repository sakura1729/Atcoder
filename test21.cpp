#include<bits/stdc++.h>
using namespace std;
string S;
int x,y,z,w,n;
bool a=false;
bool b=false;
int main(){
    cin >> S;
    for(int i=0;i<8;i++){
        if(S.at(i)=='B' && a==false){
            x=i+1;
            a=true;
            continue;
        }
        if(S.at(i)=='B' && a==true){
            y=i+1;
        }
    }
    for(int i=0;i<8;i++){
        if(S.at(i)=='K')n=i+1;
        if(S.at(i)=='R' && b==false){
            z=i+1;
            b=true;
            continue;
        }
        if(S.at(i)=='R' && b==true){
            w=i+1;
        }
    }
    if((y-x)%2==1 && z<n && n<w)cout << "Yes" << endl;
    else{
        cout << "No" << endl;
    }
    return 0;
}