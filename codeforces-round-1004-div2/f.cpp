#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

unordered_map<tuple<int, long long, long long, long long>, long long> dp;
vector<int> arr;
int n;

long long addMod(long long x, long long y) {
    return (x + y) % mod;
}

long long compute(int pos, long long p, long long q, long long r) {
    if (pos == n) return (p != q && q != r && p != r) ? 1 : 0;
    auto state = make_tuple(pos, p, q, r);
    if (dp.count(state)) return dp[state];
    
    long long res = 0;
    long long newP = p ^ arr[pos];
    if (newP != q && newP != r && q != r)
        res = addMod(res, compute(pos + 1, newP, q, r));
    
    long long newQ = q ^ arr[pos];
    if (p != newQ && newQ != r && p != r)
        res = addMod(res, compute(pos + 1, p, newQ, r));
    
    long long newR = r ^ arr[pos];
    if (p != q && q != newR && p != newR)
        res = addMod(res, compute(pos + 1, p, q, newR));
    
    return dp[state] = res;
}

void solve() {
    cin >> n;
    arr.resize(n);
    for (int &x : arr) cin >> x;
    dp.clear();
    cout << compute(0, 0, 0, 0) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
