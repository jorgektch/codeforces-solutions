/* Pendiente */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        map<int, int> m;
        int pos_1 = -1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            m[v[i]]++;
        }
        int vi, vj;
        for(int i=0;i<n-1; i++){
            for(int j=i; j<n; j++){
                if(m[abs(v[i]-v[j])] != 0){
                    vi = v[i];
                    vj = v[j];
                }else{
                    break;
                }
            }
        }
        cout << vi << endl;
    }
    return 0;
}