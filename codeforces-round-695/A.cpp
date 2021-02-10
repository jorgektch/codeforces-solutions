#include<bits/stdc++.h>
using namespace std;

int t, n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>t;
    while (t--){
        cin >> n;
        bool down; int last;
        last = 9; cout << last;
        last = 8;
        if(n>1){
            cout << last; last++;
            for(int i=2; i<n; i++){
                if(last == 9){
                    cout << last; last = 0;
                } else{
                    cout << last;
                    last++;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}