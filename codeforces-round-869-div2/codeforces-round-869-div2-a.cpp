#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n, k; cin >> n >> k;
		string cad1; cin >> cad1;
		int cont=1;
		for(int j=1; j<n; j++){
			string cad; cin >> cad;
			if(cad==cad1) cont++;
		}
		cout << cont << endl;
	}
	return 0;
}
