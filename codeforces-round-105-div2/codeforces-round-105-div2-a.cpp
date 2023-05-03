#include <iostream>
using namespace std;
int main(){
	int k,l,m,n,d,count=0;
	cin>>k>>l>>m>>n>>d;
	for(int i=1; i<=d; i++){
	    bool flag=false;
	    if(i%k==0 && d>=k) flag=true;
	    if(i%l==0 && d>=l) flag=true;
	    if(i%m==0 && d>=m) flag=true;
	    if(i%n==0 && d>=n) flag=true;
	    if(flag==true) count++;
	}
	cout<<count<<endl;
	return 0;
}
