#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        long long int n; cin >> n;
        long long int sum = 0;
        long long int aux = 0;
        long long int flag = 0;

        for(int i=0; i<n; i++){
            int value; cin >> value;
            if(val <= 0){
                if(val < 0) flag = 1;
            }else{
                if(flag == 1) aux++;
                flag = 0;
            }
            if(value < 0) value *= -1;
            aux += val;
        }
        if(flag == 1) aux++;
        cout << sum << endl;
    }
    return 0;
}