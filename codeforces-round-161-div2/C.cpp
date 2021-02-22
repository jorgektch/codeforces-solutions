// Wrong answer on test 2
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;
    long long int a, b;
    map<long long int, vector<long long int>> map_ab;
    map<long long int, map<long long int, bool>> map_ab_bool;
    for(long long int i=0; i<2*n; i++){
        cin >> a >> b;
        if(map_ab_bool[a][b]==false){
            map_ab[a].push_back(b);
            map_ab_bool[a][b]=true;
        }
        if(map_ab_bool[b][a]==false){
            map_ab[b].push_back(b);
            map_ab_bool[b][a]=true;
        }
    }
    long long int count = 0;
    for(long long int i=1; i<=n; i++){    
        count += map_ab[i].size();
    }
    if(count >= 4*n){
        for(long long int i=1; i<=n; i++){
            cout << i;
            if(i!=n) cout << " ";
        }
    }else{
        cout << "-1";
    }
    cout << "\n";
    return 0;
}