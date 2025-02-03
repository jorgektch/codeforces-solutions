#include <bits/stdc++.h>
using namespace std;
void solve(){
    string b; cin >> b;
    string a = "";
    for(int i=0; i<b.size(); i++){
        if(i%2==0) a += b[i];
    }
    a += b.back();
    cout << a << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}