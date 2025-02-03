#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        string cad; cin >> cad;
        string salida = "";
        char first = cad[0];
        bool iniciado = true;
        for(int i=1; i<n; i++){
            if(iniciado == true){
                if(cad[i] == first){
                    salida += first;
                    iniciado = false;
                }
            }else{
                first = cad[i];
                iniciado = true;
            }
        }
        cout << salida << endl;
    }
    return 0;
}