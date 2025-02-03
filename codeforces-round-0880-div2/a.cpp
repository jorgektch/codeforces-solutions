#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        map<int, int> mp;
        int max = 0;
        for(int i=0; i<n; i++){
            int value; cin >> value;
            if(max<value) max = value;
            mp[value]++;
        }
        int ans = mp[0], cont = 1;
        for(int i=1; i<=max; i++){
            if(ans>=mp[i]){
                cont++;
            }
            ans = mp[i];
        }
        if(max+1 == cont){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}