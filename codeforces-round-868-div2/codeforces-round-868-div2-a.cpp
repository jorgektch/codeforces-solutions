#include <iostream>
using namespace std;
int comb_2(int n){
	int prod = 1;
	for(int i=n; i>n-2; i--){
		prod *= i;
	}
	return prod/2;
}
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n, k;
		cin >> n >> k;
		int n1, n2;
		int c1, c2;
		for(n1=0; n1<=n; n1++){
			n2 = n-n1;
			if(n1>=2)
				c1 = comb_2(n1);
			else
				c1 = 0;
			if(n2>=2)
				c2 = comb_2(n2);
			else
				c2 = 0;
			if(c1+c2 == k){
				break;
			}
		}
		if(c1+c2 == k){
			cout << "YES" << endl;
			for(int j=1; j<=n1; j++){
				cout << "-1 ";
			}
			for(int j=n1+1; j<=n; j++){
				cout << "1 ";
			}
			cout << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
