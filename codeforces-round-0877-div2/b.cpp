#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n; cin >> n;
        int uno, dos, max = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==1){
				uno = i+1;
			}else if(v[i]==2){
				dos = i+1;
			}
			if(v[i]>v[max]){
				max = i;
			}
		}
		max++;
        if(uno<max && dos<max){
        	if(uno>dos){
        		cout << uno << " " << max << endl;
			}else{
				cout << dos << " " << max << endl;
			}
		}else if(uno>max && dos>max){
			if(uno>dos){
        		cout << dos << " " << max << endl;
			}else{
				cout << uno << " " << max << endl;
			}
		}else{
			cout << n << " " << n << endl;
		}
    }
    return 0;
}