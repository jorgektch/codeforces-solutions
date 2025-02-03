#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	string z_a = "";
	map<char, int> m;
	
	for(int i=int('z'); i>=int('a'); i--){
		z_a += char(i);
	}
	
	for(int i=0; i<s.size(); i++){
		m[s[i]]++;
	}
	
	char c;
	for(int i=0; i<z_a.size(); i++){
		if(m[z_a[i]]>0){
			for(int j=0; j<m[z_a[i]]; j++){
				cout << z_a[i];
			}
			break;
		}
	}
	
	return 0;
}
