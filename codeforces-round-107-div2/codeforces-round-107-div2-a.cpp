#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int min=k*l/nl;
	if(c*d < min) min = c*d;
	if(p/np < min) min = p/np;
	cout << floor(min/n);
	return 0;
}
