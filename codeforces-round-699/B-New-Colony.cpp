#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int c=0; c<t; c++){
        int n, k;
        cin >> n; cin >> k;
        vector<int> h = vector<int>();
        for(int i=0; i<n; i++){
            int hi; cin >> hi;
            h.push_back(hi);
        }
        int pos = 0;
        for(int i=0; i<k; i++){
            pos = 0;
            bool next_down = true;
            while(pos+1<n && next_down){
                if(h[pos]<h[pos+1]){
                    next_down = false;
                    h[pos]++;
                }else{
                    pos++;
                }
            }
        }
        if(pos<n-1){
            cout << pos+1 << "\n";
        }else{
            cout << "-1\n";
        }
    }
}