#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int c=0; c<t; c++){
        int n; cin>>n;
        string b; cin>>b;
        string d;
        if(b[0]=='0') d+= '1';
        else d+= '2';
        char last = d[0];
        for(int i=1; i<b.length(); i++){
            if(b[i]=='0'){
                if(last == '1') d+= '0';
                else d+= '1';
            }else{
                if(last == '2') d+= '1';
                else d+='2';
            }
            last = d[i];
        }
        string a;
        for(int i=0; i<b.length(); i++){
            int temp = (int)d[i]-(int)b[i];
            if(temp == 0) a+= '0';
            if(temp == 1) a+= '1';
            if(temp == 2) a+= '2';
        }
        cout<<a<<"\n";
    }
    return 0;
}