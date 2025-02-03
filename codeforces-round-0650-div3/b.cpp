#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int ai;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> ai;
        if(ai%2 != i%2) count++;
    }
    if(count%2 !=0) cout << "-1" << endl;
    else cout << count/2 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}