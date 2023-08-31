#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=arr[k-1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}