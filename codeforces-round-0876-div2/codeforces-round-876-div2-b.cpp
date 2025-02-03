#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n; cin >> n;
        vector<int> a(n+1);
        vector<int> b(n+1);
        map<int, vector<int>> m;
        for(int i=1; i<=n; i++){
            cin >> a[i] >> b[i];
            m[a[i]].emplace_back(b[i]);
        }
        for(int i=1; i<=n; i++){
            sort(m[i].begin(), m[i].end(), greater<int>());
        }
        long long int res = 0;
        for(int i=1; i<=n; i++){
            for(int j=0; j<i && j<m[i].size(); j++){
                res += m[i][j];
            }
        }
        cout << res << endl;
        return 0;
    }
    return 0;
}