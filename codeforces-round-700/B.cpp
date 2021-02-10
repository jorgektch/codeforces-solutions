#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t; cin>>t;
    for(long int c=0; c<t; c++){
        long int a; cin >> a;
        long int b; cin >> b;
        long int n; cin >> n;
        vector<long int> a_vector = vector<long int>();
        vector<long int> b_vector = vector<long int>();
        for(long int j=0; j<n; j++){
            long int ai; cin >> ai;
            a_vector.push_back(ai);
        }
        for(long int j=0; j<n; j++){
            long int bi; cin >> bi;
            b_vector.push_back(bi);
        }
        map<long int, map<long int, bool>> b_map;
        long int monsters = 0;
        long int pos = 0;
        while(b>0 && pos<n){
            while(b>0 && b_vector[pos]>0){
                b_vector[pos] =  b_vector[pos]-a;
                b = b-a_vector[pos];
            }
            if(b_vector[pos]<=0){
                monsters++;
            }
            pos++;
        }
        if(monsters<n){
            cout << "NO\n";
        }else{
            cout << "TRUE\n";
        }
    }
    return 0;
}