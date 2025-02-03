#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int r_x=0, r_y=0, r_z=0;
    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        r_x+=x; r_y+=y; r_z+=z;
    }
    if(r_x == 0 && r_y == 0 && r_z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}