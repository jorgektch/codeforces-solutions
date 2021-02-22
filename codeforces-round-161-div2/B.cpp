#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int ai, ai_max, ai_min;
    vector<int> vector_a; map<int, int> map_a;
    for(int i=0; i<n; i++){
        cin >> ai;
        if(map_a[ai]==0){
            vector_a.push_back(ai);
        }
        map_a[ai]++;
        if(ai>ai_max) ai_max = ai;
        if(ai<ai_min) ai_min = ai;
    }
    sort(vector_a.begin(), vector_a.end(), greater<int>());
    map<int, int> map_k;
    int ans = 0;
    for(int i=0; i<vector_a.size(); i++){
        ans += map_a[vector_a[i]];
        map_k[ans] = vector_a[i];
    }
    
    if(map_k[k]>0) cout << map_k[k] << " " << map_k[k] << "\n";
    else cout << "-1" << "\n";
    return 0;
}