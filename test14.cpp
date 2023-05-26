#include<bits/stdc++.h>
using namespace std;
int n,A[105];
vector<int> B;
int main(){
    cin >> n;
    for(int i=0;i<n;i++)cin >> A[i];
    for(int i=0;i<n;i++){
        if(A[i]%2==0)B.push_back(A[i]);
    }
    for(int x : B){
        cout << x << " ";
    }
}