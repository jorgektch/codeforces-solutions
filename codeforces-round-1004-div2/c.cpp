#include <bits/stdc++.h>
using namespace std;

bool valid(long long num) {
    if(to_string(num).find('7') != string::npos) return true;
    else return false;
}

bool possible(long long num, int ops) {
    long long base = num - ops;
    int digits[20] = {0}, length = 0;
    
    if (base == 0) digits[length++] = 0;
    else {
        while (base > 0) {
            digits[length++] = base % 10;
            base /= 10;
        }
    }
    
    int maxLength = max(length, 12);
    const int maxCarry = 40;
    int dp[32][42] = {0}, nextDp[32][42] = {0};
    dp[ops][0] = 1;

    for (int pos = 0; pos < maxLength; pos++) {
        for (int i = 0; i <= ops; i++)
            for (int j = 0; j < maxCarry; j++)
                nextDp[i][j] = 0;

        int digit = (pos < length ? digits[pos] : 0);

        for (int rem = 0; rem <= ops; rem++) {
            for (int carry = 0; carry < maxCarry; carry++) {
                int mask = dp[rem][carry];
                if (mask == 0) continue;
                int total, newDigit, newCarry, newRem, newMask;
                for (int add = 0; add <= rem; add++) {
                    total = digit + carry + add;
                    newDigit = total % 10;
                    newCarry = total / 10;
                    if (newCarry >= maxCarry) continue;
                    newRem = rem - add;
                    newMask = mask;
                    if (newDigit == 7) newMask |= 2;
                    nextDp[newRem][newCarry] |= newMask;
                }
            }
        }
        for (int i = 0; i <= ops; i++)
            for (int j = 0; j < maxCarry; j++)
                dp[i][j] = nextDp[i][j];
    }
    if((dp[0][0] & 2) != 0) return true;
    else return false;
}

void solve() {
    long long num;
    cin >> num;
    if (valid(num)) {
        cout << 0 << "\n";
        return;
    }
    int minOps = -1;
    for (int ops = 1; ops <= 30; ops++) {
        if (possible(num, ops)) {
            minOps = ops;
            break;
        }
    }
    cout << minOps << "\n";
}

int main() {   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
