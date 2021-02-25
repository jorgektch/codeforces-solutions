#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d; cin >> n >> d;
    long long int hi; vector<long long int> h;
    for(int i=0; i<n; i++){
        cin >> hi;
        h.push_back(hi);
    }
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs(h[i]-h[j])<=d)
                count ++;
        }
    }
    cout << 2*count;
    return 0;
}