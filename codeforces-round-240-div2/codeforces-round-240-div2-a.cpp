#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    vector<int> off(n, 0);
    for(int i=0; i<m; i++){
        int bi; cin >> bi;
        for(int j=bi-1; j<n; j++){
            if(off[j] ==0 ){
                off[j] = bi;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << off[i] << " ";
    }
    return 0;
}