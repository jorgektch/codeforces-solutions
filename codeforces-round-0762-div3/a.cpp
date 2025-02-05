#include <bits/stdc++.h>
using namespace std;
/*
    Approach 1. function substr O(n)
    Approach 2. Use loop with flag O(n)
*/
void solve(){
    string s; cin >> s;
    int n = s.size();
    if(s.size()%2 != 0){
        cout << "NO" << endl;
    }else{
        if(s.substr(0, n/2) == s.substr(n/2, n/2)){  
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}