#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m, s;
    cin >> n >> m >> s;
    cout << ((m-1)/s+1)*((n-1)/s+1)*(1+(n-1)%s)*(1+(m-1)%s);
    return 0;
}