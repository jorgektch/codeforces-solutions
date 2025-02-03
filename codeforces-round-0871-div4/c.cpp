#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n; cin >> n;
		vector<int> time_10;
		vector<int> time_01;
		vector<int> time_11;
		for(int j=0; j<n; j++){
			int m; cin >> m;
			string s; cin >> s;
			if(s=="10") time_10.push_back(m);
			else if(s=="01") time_01.push_back(m);
			else if(s=="11") time_11.push_back(m);
		}
		sort(time_10.begin(), time_10.end());
		sort(time_01.begin(), time_01.end());
		sort(time_11.begin(), time_11.end());
		if(time_10.size()==0 || time_01.size()==0){
			if(time_11.size()>0){
				cout << time_11[0] << endl;
			}else{
				cout << -1 << endl;
			}
		}else{
			if(time_11.size()>0){
				if(time_10[0]+time_01[0] < time_11[0]){
					cout << time_10[0]+time_01[0] << endl;
				}else{
					cout << time_11[0] << endl;
				}
			}else{
				cout << time_10[0]+time_01[0] << endl;
			}
		}
	}
	return 0;
}
