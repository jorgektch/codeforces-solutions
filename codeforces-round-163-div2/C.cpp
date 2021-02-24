// Pending
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, map<int, int>> m; //
    vector<vector<int>> vector_ones;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        m[i][j] = 1;
        vector<int> temp;
        temp.push_back(i);
        temp.push_back(j);
        vector_ones.push_back(temp);
    }

    for(int i=0; i<n-1; i++){
        if(!(vector_ones[i][0]==2+i && vector_ones[i][0]==1+i)){
            if(vector_ones[i][0]!=2+i){
                cout << 1 << " " << 2 << " " << 2 << " " << "\n";
                for(int j=0; j<n; j++)
                    vector_ones[i][0] = 
            }
        }
    }
    int count = 0;
    while(){
        if
    }
    for(int)
    return 0;
}