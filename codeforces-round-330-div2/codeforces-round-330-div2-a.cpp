#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int cont = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int dpt1, dpt2;
            cin >> dpt1 >> dpt2;
            if(dpt1+dpt2 >= 1) cont++;
        }
    }
    cout << cont << endl;
    return 0;
}