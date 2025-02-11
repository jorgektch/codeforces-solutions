#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int k = n+n/2;
    vector<int> freq(k + 1, 0);
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        freq[value]++;
    }
    int max = 2 * n;
    vector<vector<bool> > dp(k + 2, vector<bool>(max + 1, false));
    dp[1][0] = true;

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j <= max; j++) {
            if (!dp[i][j]) continue;
            int diff = freq[i] + j;
            for (int k = 0; k <= diff; k++) {
                int rem = diff - k;
                if (rem % 2 != 0) continue;
                if (k > 0 && rem < 2) continue;
                if (max>=k) {
                    dp[i + 1][k] = true;
                }
            }
        }
    }
    cout << (dp[k + 1][0] ? "YES" : "NO") << "\n";
}

int main() {   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
