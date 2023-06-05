#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n, m; cin >> n >> m;
        int x = (2*m) + 1;
	    while (x <= n*m) {
	      for (int i = 0; i < m; i++)
	        cout << x + i << " ";
	      cout << endl;
	      x += 2*m;
	    }
	    for (int i = 1; i <= m; i++) cout << i << " ";
	    cout << endl;
	    for (int i = 3*m + 1; i <= 4*m; i++) cout << i << " ";
	    cout << endl;
	    x = m + 1;
	    while (x <= n*m) {
	      if (x == 3*m + 1) {
	        x += 2*m;
	        continue;
	      }
	      for (int i = 0; i < m; i++)
	        cout << x + i << " ";
	      cout << endl;
	      x += 2*m;
	    }
    }
    return 0;
}