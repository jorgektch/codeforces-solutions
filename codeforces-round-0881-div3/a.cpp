#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        // 0 1 2* 3 4 -> n/2 = 5/2 = 2
        // 2 5 7  9 11
        
        // 0 1 2 3 -> n/2 = 4/2 = 2
        // 2 5 7 9
        long long int sum=0;
        for(int i=0; i<n/2; i++){
            sum += abs(arr[n-i-1]-arr[i]);
        }
        cout << sum << endl;
    }
    return 0;
}