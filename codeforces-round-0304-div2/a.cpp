#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w; cin >> k >> n >> w;
    if(n >= k*w*(w+1)/2){
        cout << 0 << endl;
    }else{
        cout << k*w*(w+1)/2 - n << endl;
    }
    return 0;
}