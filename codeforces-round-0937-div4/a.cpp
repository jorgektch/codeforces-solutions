#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> a(3);
    for(auto &e: a) cin >> e;
    if(a[0]<a[1] && a[1]<a[2]) cout << "STAIR" << endl;
    else if(a[0]<a[1] && a[1]>a[2]) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
