#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int i=0;
        int j= 1e9+5;
        int mid, ans = 0;
        while(i<=j){
            mid = i+(j-i)/2;
            int k, l=0, cont=0;
            for(k=0; k<n; k++){
                if(v[k]-v[l]>2*mid){
                    j = k;
                    cont++;
                }
            }
        
            if(cont >= 3){
                i = mid+1;
            }else{
                ans = mid, j = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}