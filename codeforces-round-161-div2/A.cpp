#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int mi; int i_0, j_0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> mi;
            if(mi == 1){
                i_0 = i;
                j_0 = j;
            }
        }
    }
    cout << abs(3-i_0)+abs(3-j_0) << "\n";
    return 0;
}