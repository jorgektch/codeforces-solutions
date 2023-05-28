#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, c; cin >> n >> c;
	int ans; cin >> ans;
	int val, cont=1;
	for(int i=1; i<n; i++){
		cin >> val;
		if(val-ans<=c) cont++;
		else cont=1;
		ans=val;
	}
	cout << cont;
	return 0;
}
