#include <bits/stdc++.h>
using namespace std;
bool valid(int x) {
    return x >= 1 && x <= 36;
}
void solve(){
    int x, y;
    cin >> x >> y;
    if (x+1-y >= 0 && (x+1-y)%9 == 0) {
        cout << "YES" << endl;
    } else {
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