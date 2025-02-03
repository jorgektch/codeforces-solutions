#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        long long int n; cin >> n;
        long long int pi; vector<long long int> p;
        map<long long int, long long int> map_pos;
        for(long long int i=0; i<n; i++){
            cin >> pi;
            p.push_back(pi);
            map_pos[pi] = i;
        }
        vector<long long int> p_new = vector<long long int>();
        long long int last_pos = n;
        for(long long int i=n; i>0; i--){
            if(map_pos[i]<last_pos){
                p_new.insert(p_new.end(), p.begin()+map_pos[i], p.begin()+last_pos);
                last_pos = map_pos[i];
            }
        }
        for(long long int i=0; i<p_new.size(); i++){
            cout << p_new[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}