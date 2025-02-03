#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    if (n == k) {
        int min_cost = -1;
        for (int i = 2; i <= n; i += 2) {
            if (a[i] != i / 2) {
                min_cost = i / 2;
                break;
            }
        }
        if (min_cost == -1) min_cost = n / 2 + 1;
        cout << min_cost << endl;
    } else {
        int first_diff = -1;
        for (int i = 2; i <= n - k + 2; i++) {
            if (a[i] != 1) {
                first_diff = i;
                break;
            }
        }

        if (first_diff == -1) {
            long long expect_value = 2;
            for (int i = n - k + 1; i <= n; i += 2) {
                if (a[i] != expect_value) break;
                expect_value++;
            }
            cout << expect_value << endl;
        } else {
            cout << 1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
