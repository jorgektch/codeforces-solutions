#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
    vector<int> k(n);
    for(int i=0; i<n; i++) cin >> k[i];
    int tmin = INT_MAX;
    for(int i=0; i<n; i++){
        int ti = 0;
        for(int j=0; j<k[i]; j++){
            int mij; cin >> mij;
            ti += (5*mij+15);
        }
        if(ti < tmin) tmin = ti;
    }
    cout << tmin << endl;
	return 0;
}