// Pending
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int m, n;
    cin >> m >> n;
    string s, t;
    cin >> s >> t;
    map<char, long long int> map_pos;
    for(int i=1; i<=n; i++){
        if(i>map_pos[s[i-1]])
            map_pos[s[i-1]] = i;
    }
    long long int acum = 0;
    long long int ans_pos = -1;
    for(int i=1; i<=m; i++){
        if(map_pos[t[i-1]]>ans_pos){
            acum = max(acum, map_pos[t[i-1]]-ans_pos);
            ans_pos = map_pos[t[i-1]];
        }
    }
    cout << acum;
    return 0;
}