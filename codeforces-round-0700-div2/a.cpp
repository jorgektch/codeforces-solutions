#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int c=0; c<t; c++){
        string cad; cin >> cad;
        for(int i=0; i<cad.length()/2+1; i++){
            if(cad[2*i]=='a') cad[2*i] = 'b';
            else cad[2*i] = 'a';
            if(cad[2*i+1]=='z') cad[2*i+1] = 'y';
            else cad[2*i+1] = 'z';
        }
        cout << cad << "\n";
    }
    return 0;
}