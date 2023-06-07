#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        long long int n, k; cin >> n >> k;
        if(log2(n)<k){
            cout << n+1 << endl;
        }else{
            cout << (int)pow(2,k) << endl;
        }
    }
    return 0;
}