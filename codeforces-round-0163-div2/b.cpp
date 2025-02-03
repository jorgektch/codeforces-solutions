#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    string s; cin >> s;
    int i=0;
    while(i<t){
        int j=0;
        while(j<n-1){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j += 2;
            }else{
                j++;
            }
        }
        i++;
    }
    cout << s;
    return 0;
}