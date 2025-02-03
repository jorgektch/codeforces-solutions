#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	vector<int> arr;
	int temp;
	for(int i=0;i<4;i++){
		cin >> temp;
		bool is_unique=true;
		for(int j=0;j<arr.size();j++){
			if(arr[j]==temp){
				is_unique=false;
				break;
			}
		}
		if(is_unique==true){
			arr.push_back(temp);
		}
	}
	cout << 4-arr.size();
	return 0;
}
