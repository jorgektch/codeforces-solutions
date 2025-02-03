#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> a(4);
    for(auto &e: a) cin >> e;
    string s; cin >> s;
    int acum = 0;
    for(int i=0; i<s.size(); i++){
        acum += a[s[i]-'1'];
    }
    cout << acum;
}
int main(){
    solve();
    return 0;
}
