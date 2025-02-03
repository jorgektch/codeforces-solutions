#include <bits/stdc++.h>
using namespace std;
long long int f(string cad){

}
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        string cad; cin >> cad;
        if(cad[0]!='E') cad[0] == 'E';
        map<int, int> mp;
        mp['A'] = 1;
        mp['B'] = 10;
        mp['C'] = 100;
        mp['D'] = 1000;
        mp['E'] = 10000;
        char c_max = 'A';
        vector<long long int> v(cad.size(), 0);
        for(long long int i=cad.size()-1; i>=0; i--){
            if(cad[i]<c_max){
                v[i] = 0-mp[cad[i]];
            }else{
                c_max = cad[i];
                v[i] = mp[cad[i]];
            }
        }
        cout << accumulate(v.begin(), v.end(), 0) << endl;
    }
    return 0;
}