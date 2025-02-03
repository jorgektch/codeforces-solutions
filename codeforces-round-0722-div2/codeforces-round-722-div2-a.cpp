#include<bits/stdc++.h>
// g++ A.cpp -o A && .\A < A.input
using namespace std;
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        int n; cin >> n;
        double vi; vector<double> v;
        for(int i=0; i<n; i++){
            cin >> vi; v.push_back(vi);
        }
        sort(v.begin(), v.end());
        double avg;
        if(v.size() == 1){
        	avg = v[0];
        }else{
        	avg = (v[0]+v[1])/2;
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(v[i]>avg){
            	count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}