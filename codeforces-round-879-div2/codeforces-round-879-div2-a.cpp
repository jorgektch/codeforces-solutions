#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        int ones = 0, min_ones = 0;
        for(int i=0; i<n; i++){
            int val; cin >> val;
            if(val == 1){
                ones++;
            }else{
                min_ones++;
            }            
        }
        if(ones == n){
                cout << "0" << endl;
        }else if(min_ones <= ones){
            if(min_ones%2 == 0){
                cout << "0" << endl;
            }else{
                cout << "1" << endl;
            }
        }else{
            int half = n/2;
            int dif = min_ones-half;
            if(half%2 != 0){
                dif++;
            }
            cout << dif << endl;
        }
    }
    return 0;
}