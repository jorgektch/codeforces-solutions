#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> copy_a = a;
    sort(copy_a.begin(), copy_a.end(), greater<int>());
    map<int, int> m;
    for(int i=0; i<n; i++){
        if(m[copy_a[i]] == 0){
            m[copy_a[i]] = i+1;
        }
    }
    for(int i=0; i<n; i++) cout << m[a[i]] << " ";
    return 0;
}