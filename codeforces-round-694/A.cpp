#include <bits/stdc++.h>
using namespace std;
long long int beauty(vector<long long int> a, long long int x){
    long long int sum = 0;
    for(int i=0; i<a.size(); i++){
        sum += ceil(a[i]/(x+0.0));
    }
    return sum;
}
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        int n; cin >> n;
        long long int x; cin >> x;
        long long int ai; vector<long long int> a;
        for(int i=0; i<n; i++){
            cin >> ai; a.push_back(ai);
        }
        long long int sum_min = 0, sum_max = 0;
        for(int i=0; i<n; i++){
            sum_max += (a[i]+x-1)/x;
            sum_min += a[i];
        }
        sum_min = (sum_min+x-1)/x;
        cout << sum_min << " " << sum_max << "\n";
    }
    return 0;
}