#include <bits/stdc++.h>
using namespace std;
int main(){
	string cad1, cad2, cad3;
	cin >> cad1 >> cad2;
	cad3 = "";
	for(int i=0; i<cad1.size(); i++){
		if(cad1[i]!=cad2[i]){
			cout << 1;
		}else{
			cout << 0;
		}
	}
	return 0;
}
