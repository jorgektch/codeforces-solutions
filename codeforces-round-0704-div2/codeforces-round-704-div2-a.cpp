#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;
        long long int dist_a, dist_b, dist_c;
        if(p%a == 0) dist_a = 0;
        else dist_a = a-p%a;
        if(p%b == 0) dist_b = 0;
        else dist_b = b-p%b;
        if(p%c == 0) dist_c = 0;
        else dist_c = c-p%c;
        long long int count = min(dist_a, min(dist_b,dist_c));
        cout << count << "\n";
    }
    return 0;
}