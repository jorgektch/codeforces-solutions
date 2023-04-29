#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		if(n==1){
			cout << 1 << endl;
		}else if(n%2!=0){
			cout << -1 << endl;
		}else{
			for(int j=1; j<=n; j+=2){
				cout << j+1 << " " << j << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
