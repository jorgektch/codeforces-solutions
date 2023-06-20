#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        long long int n, k, g; cin >> n >> k >> g;
        if(k*g - (((g+1)/2) -1)*n < 0){
            cout << k*g << endl;
            continue;
        }
        cout << k*g - ((((k*g - (((g+1)/2) - 1)*n + g - 1)/g)*g)) << endl;
    }
    return 0;
}