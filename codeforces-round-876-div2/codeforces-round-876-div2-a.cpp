#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        v[0] = 1;
        int cont = 1;
        for(int i=1; i<n; i++){
            if(ceil((i+1.0)/k)>cont){
                v[i] = 1;
                cont++;
            }else{
                v[i] = 0;
            }
        }
        v[n-1] = 1;
        cont = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 1) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}