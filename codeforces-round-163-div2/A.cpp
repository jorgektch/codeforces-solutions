#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    char ans = s[0];
    int count = 1;
    for(int i=1; i<n; i++){
        if(s[i]!=ans){
            ans = s[i];
            count++;
        }
    }
    cout << s.length()-count;
    return 0;
}