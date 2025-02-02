#include <bits/stdc++.h>
using namespace std;

const long long INF = LLONG_MAX;

void solve() {
    int n, s1, s2, m1, m2;
    cin >> n >> s1 >> s2 >> m1;
    vector<vector<int>> g1(n + 1);
    for (int i = 0; i < m1; ++i) {
        int u, v;
        cin >> u >> v;
        g1[u].push_back(v);
        g1[v].push_back(u);
    }
    cin >> m2;
    vector<vector<int>> g2(n + 1);
    for (int i = 0; i < m2; ++i) {
        int u, v;
        cin >> u >> v;
        g2[u].push_back(v);
        g2[v].push_back(u);
    }
    vector<bool> is_good(n + 1, false);
    for (int v = 1; v <= n; ++v) {
        set<int> vecinos_2(g2[v].begin(), g2[v].end());
        for (int vecino_1 : g1[v]) {
            if (vecinos_2.count(vecino_1)) {
                is_good[v] = true;
                break;
            }
        }
    }

    vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, INF));
    dist[s1][s2] = 0;
    priority_queue<tuple<long long, int, int>, 
                   vector<tuple<long long, int, int>>, 
                   greater<>> pq;

    pq.push({0, s1, s2});
    long long result = -1;

    while (!pq.empty()) {
        auto [dist_curr, u, v] = pq.top();
        pq.pop();

        if (dist_curr != dist[u][v]) {
            continue;
        }

        if (u == v && is_good[u]) {
            result = dist_curr;
            break;
        }

        for (int new_u : g1[u]) {
            for (int new_v : g2[v]) {
                long long new_dist = dist_curr + abs(new_u - new_v);
                if (new_dist < dist[new_u][new_v]) {
                    dist[new_u][new_v] = new_dist;
                    pq.push({new_dist, new_u, new_v});
                }
            }
        }
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
