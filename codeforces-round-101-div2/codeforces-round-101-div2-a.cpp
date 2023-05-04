#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2, s1s2, s3;
	cin >> s1 >> s2 >> s3;
	s1s2 = s1+s2;
	sort(s1s2.begin(), s1s2.end());
	sort(s3.begin(), s3.end());
	if(s1s2 == s3 ) cout << "YES";
	else cout << "NO";
	return 0;
}
