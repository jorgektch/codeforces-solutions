#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int c=0; c<t; c++){
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int ai; cin >> ai;
            a.push_back(ai);
        }
        vector<vector<int>> memory;
        vector<int> temp1; temp1.push_back(a[0]);
        memory.push_back(temp1);
        bool increm = false;
        for(int i=1; i<n; i++){
            if(a[i]==a[i-1]){
                memory[memory.size()-1].push_back(a[i]);
                increm = false;
            }else{
                if(i!=1 && increm == false){
                    vector<int> temp2; temp2.push_back(a[i]);
                    memory.push_back(temp2);
                }
                increm = true;
            }
        }
        int max_size = 0;
        for(int i=0; i<memory.size(); i++){
            if(memory[i].size()>max_size) max_size = memory[i].size();
        }
        cout << max_size << "\n";
    }
    return 0;
}