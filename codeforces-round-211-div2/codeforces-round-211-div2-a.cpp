#include <bits/stdc++.h>
using namespace std;
int main(){
    string n; cin >> n;
    for(int i=n.size()-1; i>=0; i--){
        int digit = int(n[i])-int('0');
        if(digit<5){
            cout << "O-";
        }else{
            cout << "-O";
        }
        cout << "|";
        for(int j=1; j<=digit%5; j++){
            cout << "O";
        }
        cout << "-";
        for(int j=digit%5+1; j<=4; j++){
            cout << "O";
        }
        cout << endl;
    }
    return 0;
}