#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int px_ans, py_ans; cin >> px_ans >> py_ans;
    float dist = 0.0;
    for(int i=1; i<n; i++){
        int px, py; cin >> px >> py;
        dist += sqrt(pow(px-px_ans,2) + pow(py-py_ans,2));
        px_ans = px;
        py_ans = py;
    }
    printf("%.6f\n", k*dist/(50)); // cout -> error!
    return 0;
}