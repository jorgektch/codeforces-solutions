#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int pos = 0;
    string output = "";
    while(pos<s.length()){
        if(s[pos]=='-'){
            if(s[pos+1]=='-'){
                output += '2';
            }else if(s[pos+1]=='.'){
                output += '1';
            }
            pos += 2;
        }else{
            output += '0';
            pos ++;
        }
    }
    cout << output;
    return 0;
}