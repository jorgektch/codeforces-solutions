#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int ti=0; ti<t; ti++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        if(a[n-1] == 0){
            int i = n-1;
            cout << "YES" << endl;
            while(i>=0){
                int j = i, k = 0;
                int aux = 0;
                while(j>=0 && k<=a[j]){
                    aux = aux + a[j];
                    k = a[j];
                    j--;
                }
                for(int l=j+1; l<i; l++)
                    cout << 0 << " ";
                cout << aux << " ";
                i = j;
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}