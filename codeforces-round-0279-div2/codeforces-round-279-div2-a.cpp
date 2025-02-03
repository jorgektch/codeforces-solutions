#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ti;
    map<int, vector<int>> mp;
    for(int i=0; i<n; i++){
        cin >> ti;
        mp[ti].push_back(i+1);
    }
    int m = min({mp[1].size(), mp[2].size(), mp[3].size()});
    cout << m << endl;
    for(int i=0; i<m; i++){
        cout << mp[1][i] << " ";
        cout << mp[2][i] << " ";
        cout << mp[3][i] << endl;
    }
    return 0;
}