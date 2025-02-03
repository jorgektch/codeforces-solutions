#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string orig, comb; cin >> orig >> comb;
    int sum = 0 ;
    for(int i=0; i<n; i++){
        if(abs(orig[i]-comb[i]) <= 5){
            sum += abs(orig[i]-comb[i]);
        }else{
            sum += 10-abs(orig[i]-comb[i]);
        }
    }
    cout << sum << endl;
    return 0;
}