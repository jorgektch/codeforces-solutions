#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int m; cin >> m;
    vector<int> x(m);
    vector<int> y(m);
    for(int i=0; i<m; i++) cin >> x[i] >> y[i];
    for(int i=0; i<m; i++){
        int pos = x[i]-1;
        if(pos-1 >= 0){
            v[pos-1] += (y[i]-1);
        }
        if(pos+1 <= n-1){
            v[pos+1] += (v[pos]-y[i]);
        }
        v[pos] = 0;
    }
    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }
    return 0;
}