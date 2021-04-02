#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,1,1},{1,1,1}};
    vector<vector<int>> toggle;
    vector<int> row_temp;

    int a00, a01, a02;
    cin >> a00 >> a01 >> a02;
    row_temp = {a00, a01, a02};
    toggle.push_back(row_temp);

    int a10, a11, a12;
    cin >> a10 >> a11 >> a12;
    row_temp = {a10, a11, a12};
    toggle.push_back(row_temp);

    int a20, a21, a22;
    cin >> a20 >> a21 >> a22;
    row_temp = {a20, a21, a22};
    toggle.push_back(row_temp);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=max(0, i-1); k<=min(2, i+1); k++){
                for(int l=max(0, j-1); l<=min(2, j+1); l++){
                    if(k!=i && l!= j) toggle[i][j] += toggle[k][l];
                }
            }
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(toggle[i][j]%2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }
    return 0;
}