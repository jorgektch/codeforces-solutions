#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        int n; cin >> n;
        long long int hi; vector<long long int> h;
        for(int i=0; i<n; i++){
            cin >> hi; h.push_back(hi);
        }
        bool is_possible = true;
        if(n==1){
            cout << "YES\n";
        }else{
            for(int i=1; i<n; i++){
                if(h[i-1] >= i-1){
                    h[i] = h[i]+h[i-1]-(i-1);
                    h[i-1] = i-1;
                    if(h[i] < i)
                        is_possible = false;
                }else{
                    is_possible = false;
                }
            }
            if(is_possible) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}