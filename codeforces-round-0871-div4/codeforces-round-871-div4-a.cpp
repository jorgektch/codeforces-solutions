#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	string cad="codeforces";
	for(int i=0; i<n; i++){
		int count=0;
		string s; cin >> s;
		for(int j=0; j<s.size(); j++){
			if(s[j]!=cad[j]) count++;
		}
		cout << count << endl;
	}
	return 0;
}
