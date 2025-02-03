#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin >> s;
    if(s=="abc" || s=="acb" || s=="cba" || s=="bac"){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
