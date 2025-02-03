#include <bits/stdc++.h>
using namespace std;

string sol(int A, int B, int C, long long int &k){
    vector<string> v;
    long long int cont;
    for(long long int i=pow(10,A-1); i<pow(10,A); i++){
        k -= cont;
        v.clear();
        cont = 0;
        for(long long int j=pow(10,B-1); j<pow(10,B); j++){
            if(pow(10,C-1)<=i+j && i+j <pow(10,C)){
                v.push_back(to_string(i)+" + "+to_string(j)+" = "+to_string(i+j));
                cont ++;
            }
        }
    }
    if(v.size()<k){
        return "-1";
    }else{
        return v[k-1];
    }
}

int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int A, B, C;
        long long int k;
        cin >> A >> B >> C;
        cin >> k;
        cout << sol(A, B, C, k) << endl;
    }
    return 0;
}