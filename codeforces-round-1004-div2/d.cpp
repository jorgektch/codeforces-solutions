#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> x(n + 1);
    vector<bool> v2(n + 1, false);
    int value = -1, min = 1, max = 1;

    for (int i = 1; i <= n; i++) {
        cin >> x[i];
        if (x[i] >= 1 && x[i] <= n)
            v2[x[i]] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!v2[i]) {
            value = i;
            break;
        }
    }

    if (value != -1) {
        int value2;
        if (value == 1) {
            value2 = 2;
        } else {
            value2 = 1;
        }
        cout << "? " << value << " " << value2 << endl << flush;
        int response;
        cin >> response;
        if (response == -1) return;
        if (response == 0) {
            cout << "! A" << endl << flush;
        } else {
            cout << "! B" << endl << flush;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (x[i] < x[min])
                min = i;
            if (x[i] > x[max])
                max = i;
        }
        int diff_abs = abs(x[min] - x[max]);

        cout << "? " << min << " " << max << endl << flush;
        int r;
        cin >> r;
        if (r == -1) return;

        if (r < diff_abs) {
            cout << "! A" << endl << flush;
        } else if (r > diff_abs) {
            cout << "! B" << endl << flush;
        } else {
            cout << "? " << max << " " << min << endl << flush;
            int r2;
            cin >> r2;
            if (r2 == -1) return;
            if (r2 == diff_abs) {
                cout << "! B" << endl << flush;
            } else {
                cout << "! A" << endl << flush;
            }
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
