#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1; cin >> s1;
	string s2; cin >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if (s1.compare(s2)==0) cout << 0;
	else if (s1.compare(s2)>0) cout << 1;
	else cout << -1;
	return 0;
}
