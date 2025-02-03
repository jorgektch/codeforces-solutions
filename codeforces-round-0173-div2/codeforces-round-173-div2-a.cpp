#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int x = 0;
	for(int i=0; i<n; i++){
		string cad; cin >> cad;
		if(cad[0]=='+' || cad[2]=='+') x++;
		else x--;
	}
	cout << x;
	return 0;
}
