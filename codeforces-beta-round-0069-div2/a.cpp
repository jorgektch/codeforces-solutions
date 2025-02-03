#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	int divs=0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			divs++;
		}
		if(divs>2){
			return false;
		}
	}
	return true;
}
int main(){
	int m, n; cin >> n >> m;
	string res = "YES";
	if(is_prime(m) == true){
		for(int i=n+1; i<m; i++){
			if(is_prime(i) == true){
				res = "NO";
				break;
			}
		}
	}else{
		res = "NO";
	}
	cout << res << endl;
	return 0;
}
