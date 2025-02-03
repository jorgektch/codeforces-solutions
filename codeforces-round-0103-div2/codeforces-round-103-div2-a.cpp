#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int max=v[0], pos_max=0;
	int min=v[0], pos_min=0;
	for(int i=1; i<n; i++){
		if(v[i] > max){
			max = v[i];
			pos_max = i;
		}
		if(v[i] <= min){
			min = v[i];
			pos_min = i;
		}
	}
	if(pos_min>pos_max){
		cout << pos_max+(n-1-pos_min) << endl;
	}else{
		cout << pos_max+(n-2-pos_min) << endl;
	}
	
	return 0;
}
