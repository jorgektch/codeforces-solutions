#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        string res = "NO";
        for(int j=0; j<s1.size()-1; j++){
            if(s1[j]=='0' && s1[j+1]=='1' && s2[j]=='0' && s2[j+1]=='1'){
                res = "YES";
            }
        }
        cout << res << endl;
    }
    return 0;
}