#include <bits/stdc++.h>
using namespace std;
int main(){
	string number; cin >> number;
	int count = 0;
	for(int i=0; i<number.size(); i++){
		if(number[i]=='4' || number[i]=='7'){
			count++;
		}
	}
	string count_str = to_string(count);
	string res = "YES";
	for(int i=0; i<count_str.size(); i++){
		if(!(count_str[i]=='4' || count_str[i]=='7')){
			res = "NO";
			break;
		}
	}
	cout << res << endl;
	return 0;
}
