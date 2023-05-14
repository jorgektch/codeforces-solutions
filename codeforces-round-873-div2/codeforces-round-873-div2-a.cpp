#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	for(int caso=0; caso<t; caso++){
		int a; 	cin >> a;
		vector<int> arr(a);
		for(int i=0; i<a; i++){
			arr[i] = i+1;
		}
		if(a%2 == 0){ // Par
			arr[a/2-1] *= 2;
		}
		for(int i=0; i<a; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
