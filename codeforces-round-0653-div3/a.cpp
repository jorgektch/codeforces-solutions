#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int x, y, n; cin >> x >> y >> n;
    long long int k;
    if(n%x == y) k = n;
    else if(n%x < y) k = n-(n%x+x-y);
    else k = n-(n%x+0-y);
    cout << k << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
