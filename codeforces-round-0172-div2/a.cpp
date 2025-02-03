#include <bits/stdc++.h>
using namespace std;
int main(){
	string cad; cin >> cad;
	if(!('A'<=cad[0] && cad[0]<='Z')){
		cad[0] = cad[0]-('a'-'A');
	}
	cout << cad << endl;
	return 0;
}
