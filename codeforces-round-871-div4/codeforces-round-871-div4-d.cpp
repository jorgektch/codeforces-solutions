#include <bits/stdc++.h>
using namespace std;
bool rec(int n, int m){
	if(n%3 != 0){
		if(n == m){
			return true;
		}else{
			return false;
		}
	}else if(2*n/3 == m || n/3 == m){
		return true;
	}else{
		return (rec(2*n/3, m) || rec(n/3, m));
	}
}
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n, m; cin >> n >> m;
		if(n < m){
			cout << "NO" << endl;
		}else if(n == m){
			cout << "YES" << endl;
		}else{
			if(rec(n, m) == true) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
