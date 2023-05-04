#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	vector<char> v;
	for(int i=1;i<s.size();i++){
		char actual = s[i];
		bool is_unique = true;
		for(int j=0;j<i;j++){
			if(actual==s[j]){
				is_unique = false;
				break;
			}
		}
		if(is_unique) v.push_back(actual);
	}
	if(v.size()%2!=1) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
	return 0;
}
