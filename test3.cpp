#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> data(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> data.at(i).at(j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
    
