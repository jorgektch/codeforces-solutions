#include<bits/stdc++.h>
using namespace std;
vector<int> a = vector<int>();
int t, n;
bool is_hill(int i){
    return (i>0 && i<n-1 && a[i]<a[i-1] && a[i]<a[i+1]);
}
bool is_vall(int i){
    return (i>0 && i<n-1 && a[i]>a[i-1] && a[i] > a[i+1]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>t;
    while (t--){
        cin >> n;
        a = vector<int>(); int aj;
        for(int i=0; i<n; i++){
            cin >> aj; a.push_back(aj);
        }        
        map<int, bool> hill_or_vall;
        int intimidation = 0;
        for(int i=0; i<a.size()-1; i++){
            if(is_hill(i) || is_vall(i)){
                intimidation++;
                hill_or_vall[i] = true;
            }
        }

        int output = intimidation;
        for(int i=0; i<a.size()-1; i++){
            int temp = a[i];
            a[i] = a[i-1];
            output = min(output, intimidation
                    - hill_or_vall[i-1] - hill_or_vall[i] - hill_or_vall[i+1]
                    + is_hill(i-1) + is_vall(i-1)
                    + is_hill(i) + is_vall(i)
                    + is_hill(i+1) + is_vall(i+1));
            a[i] = a[i+1];
            output = min(output, intimidation
                    - hill_or_vall[i-1] - hill_or_vall[i] - hill_or_vall[i+1]
                    + is_hill(i-1) + is_vall(i-1)
                    + is_hill(i) + is_vall(i)
                    + is_hill(i+1) + is_vall(i+1));
            a[i] = temp;
        }
        cout << output << "\n";
    }
    return 0;
}