#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end(), greater<int>());
    set<long long int> uniqu_a(a.begin(), a.end());
    set<long long int> uniqu_b(b.begin(), b.end());
    if(uniqu_a.size()+uniqu_b.size()>=4) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
