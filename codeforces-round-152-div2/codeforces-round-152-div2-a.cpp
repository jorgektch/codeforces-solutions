#include <iostream>
using namespace std;
int main(){
	int n,l,r,l_open=0,r_open=0;
	int lr_00=0,lr_01=0,lr_10=0,lr_11=0;
	int count=0;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>l>>r;
	    if(l==1) l_open++;
	    if(r==1) r_open++;
	    if(l==0 && r==0) lr_00++;
	    if(l==0 && r==1) lr_01++;
	    if(l==1 && r==0) lr_10++;
	    if(l==1 && r==1) lr_11++;
	}
	if(l_open>n-l_open){
	    count+=lr_00+lr_01;
	}else{
	    count+=lr_11+lr_10;
	}
	if(r_open>n-r_open){
	    count+=lr_00+lr_10;
	}else{
	    count+=lr_01+lr_11;
	}
	cout << count;
	return 0;
}
