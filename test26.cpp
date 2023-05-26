#include<bits/stdc++.h>
using namespace std;
int n,X[505];
int sum=0;
double result;
int main(){
    cin >> n;
    for(int i=1;i<=5*n;i++)cin >> X[i];
    sort(X+1,X+(5*n)+1);
    for(int i=1;i<=3*n;i++){
        sum+=X[n+i];
    }
    double m=sum;
    double l=n;
    result=m/(3*l);
    cout << result << endl;
}