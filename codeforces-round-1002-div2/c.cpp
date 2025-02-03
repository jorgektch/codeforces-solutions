#include <bits/stdc++.h>
using namespace std;

class BipartiteMatching {
public:
    vector<vector<int>> adj;
    vector<int> pairU, pairV, dist;
    int m, n;

    BipartiteMatching(int m, int n) : m(m), n(n) {
        adj.resize(m);
        pairU.resize(m, -1);
        pairV.resize(n, -1);
        dist.resize(m);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    bool bfs() {
        fill(dist.begin(), dist.end(), -1);
        queue<int> queue;
        for (int u = 0; u < m; u++) {
            if (pairU[u] == -1) {
                dist[u] = 0;
                queue.push(u);
            }
        }
        bool found = false;
        while (!queue.empty()) {
            int u = queue.front();
            queue.pop();
            for (int v : adj[u]) {
                if (pairV[v] == -1) {
                    found = true;
                } else if (dist[pairV[v]] == -1) {
                    dist[pairV[v]] = dist[u] + 1;
                    queue.push(pairV[v]);
                }
            }
        }
        return found;
    }

    bool dfs(int u) {
        for (int v : adj[u]) {
            if (pairV[v] == -1 || (dist[pairV[v]] == dist[u] + 1 && dfs(pairV[v]))) {
                pairU[u] = v;
                pairV[v] = u;
                return true;
            }
        }
        dist[u] = -1;
        return false;
    }

    int maxMatching() {
        int result = 0;
        while (bfs()) {
            for (int u = 0; u < m; u++) {
                if (pairU[u] == -1 && dfs(u)) {
                    result++;
                }
            }
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> rev_prefix(n, vector<int>(n + 1));
        for (int i = 0; i < n; i++) {
            rev_prefix[i][0] = 0;
            for (int v = 1; v <= n; v++) {
                rev_prefix[i][v] = rev_prefix[i][v - 1] + a[i][n - v];
            }
        }

        vector<vector<int>> queues_for_v(n + 1);
        vector<bool> possible_v(n + 1, false);
        for (int v = 0; v <= n; v++) {
            for (int i = 0; i < n; i++) {
                if (rev_prefix[i][v] == v) {
                    queues_for_v[v].push_back(i);
                    possible_v[v] = true;
                }
            }
        }

        int answer = 0;
        for (int m = n; m >= 0; m--) {
            if (m == 0) {
                answer = 0;
                break;
            }
            bool valid = true;
            for (int v = 0; v < m; v++) {
                if (v > n || !possible_v[v]) {
                    valid = false;
                    break;
                }
            }
            if (!valid) continue;

            BipartiteMatching bm(m, n);
            for (int v = 0; v < m; v++) {
                for (int q : queues_for_v[v]) {
                    bm.addEdge(v, q);
                }
            }

            int match = bm.maxMatching();
            if (match == m) {
                answer = m;
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}