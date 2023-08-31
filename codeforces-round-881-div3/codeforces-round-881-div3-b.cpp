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
            long long int value; cin >> value;
            if(value <= 0){
                if(value < 0) flag = 1;
            }else{
                if(flag == 1) aux++;
                flag = 0;
            }
            if(value < 0) value *= -1;
            sum += value;
        }
        if(flag == 1) aux++;
        cout << sum << " " << aux << endl;
    }
    return 0;
}