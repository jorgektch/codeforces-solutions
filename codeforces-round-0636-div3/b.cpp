#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int m = n/2;
    long long int last = 2*m-1+(m); // 2m-1 (last odd), m (acum difss)
    if(n == 2){
        cout << "NO" << endl;
    }else if(last>0 && last%2 != 0){
        cout << "YES" << endl;
        for(int i=0; i<n/2; i++){
            cout << 2+2*i << " ";
        }
        for(int i=0; i<n/2-1; i++){
            cout << 1+2*i << " ";
        }
        cout << last << endl;
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

