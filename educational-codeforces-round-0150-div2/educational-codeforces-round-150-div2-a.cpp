#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        if(n<=4) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    return 0;
}