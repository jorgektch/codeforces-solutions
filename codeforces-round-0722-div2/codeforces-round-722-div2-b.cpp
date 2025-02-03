#include<bits/stdc++.h>
// g++ B.cpp -o B && .\B < B.input
using namespace std;
int findMinDiff(vector<long long> arr, long long n){
    long long diff = LLONG_MAX;
    for (long long i=0; i<n-1; i++)
        for (long long j=i+1; j<n; j++)
            if (abs(arr[i] - arr[j]) < diff)
                diff = abs(arr[i] - arr[j]);
    return diff;
}
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        long long n; cin >> n;
        long long vi; vector<long long> v = vector<long long>();
        for(long long i=0; i<n; i++){
            cin >> vi; v.push_back(vi);
        }
        sort(v.begin(), v.end());
        long long max_len = 1;
        for(long long i=0; i<v.size()-1; i++){
            for(long long j=v.size()-1; i<j; j--){
                vector<long long> temp(v.begin()+i, v.end()+j+1);
                if(v[j]<=findMinDiff(temp, j-i+1) && max_len<j-i+1){
                    max_len = j-i+1;
                }
            }
        }
        cout << max_len << "\n";
    }
    return 0;
}