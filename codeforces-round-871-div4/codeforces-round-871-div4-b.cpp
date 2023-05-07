#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n; cin >> n;
		bool in_sec = false;
		int last_count=0, max = 0;
		for(int j=0; j<n; j++){
			int a; cin >> a;
			if(a==0){
				if(in_sec == true){
					last_count++;
				}else{
					last_count=1;
				}
				in_sec = true;
			}else{
				if(in_sec == true){
					if(last_count>max){
						max=last_count;
					}
				}
				in_sec = false;
			}
		}
		if(last_count>max){
			max=last_count;
		}
		cout << max << endl;
	}
	return 0;
}
