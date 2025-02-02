#include<bits/stdc++.h>
using namespace std;
int main(){
    string cad; cin >> cad;
    int upper=0, lower;
    for(int i=0; i<cad.size(); i++)	{
    	if(65<=cad[i] && cad[i]<=90){
    		upper++;
		}
	}
	lower = cad.size()-upper;
	if(upper>lower){
		for(int i=0; i<cad.size(); i++)	{
			if(!(65<=cad[i] && cad[i]<=90)){
				cad[i] = cad[i]-32;
			}
		}
	}else{
		for(int i=0; i<cad.size(); i++)	{
			if(65<=cad[i] && cad[i]<=90){
				cad[i] = cad[i]+32;
			}
		}
	}
	cout << cad << endl;
    return 0;
}
