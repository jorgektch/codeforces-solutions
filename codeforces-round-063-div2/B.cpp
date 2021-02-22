#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int li, ri, ti, ci;
    vector<int> l, r, t, c;
    map<int, vector<int>> section_athletes;
    for(int i=1; i<=m; i++){
        cin >> li; l.push_back(li);
        cin >> ri; r.push_back(ri);
        cin >> ti; t.push_back(ti);
        cin >> ci; c.push_back(ci);
        for(int j=li; j<=ri; j++){
            section_athletes[j].push_back(i);
        }
    }
    int max_prize = 0;
    for(int i=1; i<=n; i++){
        int min_t = 1001;
        int min_c = -1;
        for(auto element: section_athletes[i]){
            if(t[element-1] < min_t){
                min_t = t[element-1];
                min_c = c[element-1];
            }
        }
        if(min_c!=-1){
            max_prize += min_c;
        }
    }
    cout << max_prize << "\n";
    return 0;
}