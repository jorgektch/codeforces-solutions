#include <bits/stdc++.h>
using namespace std;
/*
    22
    1+11+111+1111 +
    2+22
    ----
    1+2 +
    1+2
    ----
    (2-1)*(1+2) + // d: repeated digit, n: number of digits

    (d-1)*(1+2+3+4) +
    n*(n+1)/2

    9999
    1+11+111+1111 +
    2+22+222+2222 +
    3+33+333+4444 +
    ...
    9+99+999+9999
    -------------
    1+2+3+4 +
    1+2+3+4 +
    1+2+3+4 +
    ...
    1+2+3+4
    --------------
    (9-1)*(1+2+3+4)

    1
    1

    777
    1+11+111+1111
    2+22+222+2222
    3+33+333+3333
    ...
    7+77+777
    --------
    1+2+3+4 +
    1+2+3+4 +
    1+2+3+4 +
    ...
    1+2+3
   ----------
   (7-1)*(1+2+3)

*/
void solve(){
    int x; cin >> x;
    int d = x%10;
    int n = to_string(x).size();
    cout << (d-1)*(1+2+3+4) + n*(n+1)/2 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}