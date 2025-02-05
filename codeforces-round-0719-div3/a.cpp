#include <bits/stdc++.h>
using namespace std;
/*
    The approach
    First:
    Loop to create a new string that removes values repeated together
    Second:
    Create a set of characters that has only unique values
    Trird:
    Compares the size of new string to the size of the set
*/
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string s_new = "";
    char last = ' ';
    for(int i=0; i<n; i++){
        if(s[i]!=last) s_new += s[i];
        last = s[i];
    }
    set<char> s_set;
    for(int i=0; i<s_new.size(); i++){
        s_set.insert(s_new[i]);
    }
    if(s_new.size() == s_set.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}