#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix_plus = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    vector<vector<int>> toggle;
	int a, b, c;
	
	toggle.push_back({0,0,0,0,0});
	
    cin >> a >> b >> c;
    toggle.push_back({0, a, b, c, 0});

    cin >> a >> b >> c;
    toggle.push_back({0, a, b, c, 0});

    cin >> a >> b >> c;
    toggle.push_back({0, a, b, c, 0});
	
	toggle.push_back({0,0,0,0,0});
	
	for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
        	int sum = matrix_plus[i][j];
			sum += toggle[i-1][j];
			sum += toggle[i][j-1];
			sum += toggle[i][j];
			sum += toggle[i][j+1];
			sum += toggle[i+1][j];
			matrix_plus[i][j] = sum%2;
		}
	}
	
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            cout << matrix_plus[i][j];
        }
        cout << "\n";
    }
	
    return 0;
}
