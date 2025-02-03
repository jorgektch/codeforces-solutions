#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, value; cin >> n;
	float sum = 0;
	for(int i=0; i<n; i++){
		cin >> value;
		sum += value;
	}
	printf("%.5f", sum/n);
	return 0;
}
