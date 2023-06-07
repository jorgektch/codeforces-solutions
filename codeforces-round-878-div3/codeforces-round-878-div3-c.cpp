#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n, k, q; cin >> n >> k >> q;
        int count = 0;
        vector<int> vect;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            if(temp<=q){
                count++;
                if(i==n-1){
                    vect.push_back(count);
                }
            }else{
                vect.push_back(count);
                count = 0;
            }
        }
        long long int res = 0.0;
        for(int i=0; i<vect.size(); i++){
            int cons = vect[i];
            for(int j=1; j<=cons; j++){
                int plus = j+k;
                plus--;
                if(plus <= cons){
                    long long int ways = cons-plus;
                    ways++;
                    res += ways;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}