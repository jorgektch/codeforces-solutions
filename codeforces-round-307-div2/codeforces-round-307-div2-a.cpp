#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    map<int, int> m;
    for(int i=0; i<n; i++){
        if(m[a[i]] == 0){
            m[a[i]] = i+1;
        }
    }
    for(int i=0; i<n; i++) cout << m[a[i]] << " ";
    return 0;
}