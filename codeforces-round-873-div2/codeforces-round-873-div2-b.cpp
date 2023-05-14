#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for(int caso=0; caso<t; caso++){
		int n; cin >> n;
		vector<int> arr(n);
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		int k = 0;
		for(int i=0; i<n; i++){
			k = __gcd(k, abs(arr[i]- (i+1)));
		}
		cout << k << endl;
	}
	return 0;
}
