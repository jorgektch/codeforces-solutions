#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n; cin >> n;
        vector<long long int> v(n);
        map<long long int, int> m;
        int pos_1 = -1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] < 0){
            	pos_1 = i;
			}
        }
        if(pos_1 != -1){
        	cout << v[pos_1] << endl;
		}else{
			sort(v.begin(), v.end());
			cout << v[n-1] << endl;
		}
    }
    return 0;
}