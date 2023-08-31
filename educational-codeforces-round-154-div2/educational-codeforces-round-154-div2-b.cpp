#include <bits/stdc++.h>
using namespace std;
string equalsString(string cad1, string cad2){
    string cad = "";
    for(int i=0; i<cad1.size(); i++){
        if(cad1[i] == cad2[i]){
            cad += cad1[i];
        }else{
            cad += ' ';
        }
    }
    return cad;
}
string check(string cad1, string cad2){
    string cad = equalsString(cad1, cad2);
    vector<int> ones;
    vector<int> zeros;
    for(int i=0; i<cad.size(); i++){
        if(cad[i] == '1'){
            ones.push_back(cad[i]);
        }else if(cad[i] == '0'){
            zeros.push_back(cad[i]);
        }
    }
    // PENDIENTE

    return "YES";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        cout << check(s1, s2) << endl;
    }
    return 0;
}