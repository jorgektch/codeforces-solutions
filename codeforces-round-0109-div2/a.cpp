#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, value; cin >> n;
	int max, min, count;
	count = 0;
	for(int i=0; i<n; i++){
		cin >> value;
		if(i==0){
			min=value;
			max=value;
		}else{
			if(value<min){
				min=value;
				count++;
			}
			if(value>max){
				max=value;
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
