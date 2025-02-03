#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int m, c, count_m=0, count_c=0;
    for(int i=0; i<n; i++){
        cin >> m >> c;
        if(m>c) count_m++;
        else if(m<c) count_c++;
    }
    if(count_m > count_c) cout << "Mishka" << endl;
    else if(count_m < count_c) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}