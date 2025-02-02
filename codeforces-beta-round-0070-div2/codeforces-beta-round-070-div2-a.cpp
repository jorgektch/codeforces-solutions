#include <bits/stdc++.h>
using namespace std;
int contar_vocales(string cad){
	int cont = 0; 
	for(int i=0; i<cad.size(); i++){
		if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u'){
			cont++; 
		}
	}
	return cont;
}
int main() {
	string cad1, cad2, cad3;
	getline(cin, cad1);
	getline(cin, cad2);
	getline(cin, cad3);
	if(contar_vocales(cad1)==5 && contar_vocales(cad2)==7 && contar_vocales(cad3)==5){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
