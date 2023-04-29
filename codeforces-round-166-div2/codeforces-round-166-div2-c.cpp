#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if(3*k>n){
        cout << -1 << "\n";
    }else{
        for(int i=0; i<k; i++){
            cout << i+1 << " " << i+1 << " ";
        }
        for(int i=0; i<k; i++){
            cout << i+1 << " ";
        }
        for(int i=0; i<n-3*k; i++){
            cout << i%k+1 << " ";
        }
    }
    return 0;
}