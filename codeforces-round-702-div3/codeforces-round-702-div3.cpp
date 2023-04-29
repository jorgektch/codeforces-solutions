#include <bits/stdc++.h>
using namespace std;
int is_dense(vector<int> a){
    for(int i=0; i<a.size()-1; i++)
        if(max(a[i], a[i+1])/min(a[i], a[i+1])>2)
            return i;
    return -1;
}
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        int n; cin >> n;
        int ai; vector<int> a = vector<int>();
        for(int i=0; i<n; i++){
            cin >> ai; a.push_back(ai);
        }
        int count = 0;
        int pos = 0;
        while(is_dense(a)>-1){
            if(a[is_dense(a)]>a[is_dense(a)+1]){
                if(a[is_dense(a)]/2+1<=3)
                    a.insert(a.begin() + is_dense(a)+1, 2);
                else
                    a.insert(a.begin() + is_dense(a)+1, a[is_dense(a)]/2+1);
            }else{
                if(2*a[is_dense(a)]-1==1)
                    a.insert(a.begin() + is_dense(a)+1, 2);
                else
                    a.insert(a.begin() + is_dense(a)+1, 2*a[is_dense(a)]-1);
            }
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}