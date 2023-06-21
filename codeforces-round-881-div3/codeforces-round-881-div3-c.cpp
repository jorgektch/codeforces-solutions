#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        long long int n; cin >> n;
        long long int sum=0;
        while(n){
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }
    return 0;
}