#include <iostream>
using namespace std;
int main(){
	int n,a,b,num,cap;
	num=0; cap=0;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>a>>b;
	    num+=(b-a);
	    if(num>cap) cap=num;
	}
	cout << cap;
	return 0;
}
