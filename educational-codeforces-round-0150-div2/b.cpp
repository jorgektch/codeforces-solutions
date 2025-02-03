#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ci=0; ci<t; ci++){
        int q; cin >> q;
        int xi; cin >> xi;
        int first = xi, last = xi;
        cout << "1";
        bool flag = 0;
        for(int i=1; i<q; i++){
            cin >> xi;
            if(!flag && first<=xi && last<=xi){
                last = xi;
                cout << "1";
            }else if(!flag && xi<=first && xi<last){
                flag = 1;
                last = xi;
                cout << "1";
            }else if(flag && last<=xi && xi<=first){
                last = xi;
                cout << "1";
            }else{
                cout << "0";
            }
            
        }
        cout << endl;
    }
    return 0;
}