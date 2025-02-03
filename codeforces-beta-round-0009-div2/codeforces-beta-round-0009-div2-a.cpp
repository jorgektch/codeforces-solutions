#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, w; cin >> y >> w;
    int num = 6-max(y,w)+1;
    int denom = 6;
    cout << num/gcd(num, denom) << "/";
    cout << denom/gcd(num, denom) << endl;
    return 0;
}