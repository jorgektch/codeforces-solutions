#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s; cin >> n >> s;
    int max = 00, suma = 0;
    for(int i=0; i<n; i++){
        int valor; cin >> valor;
        suma += valor;
        if(valor > max) max = valor;
    }
    if(suma-max <= s) cout << "YES";
    else cout << "NO";
    return 0;
}