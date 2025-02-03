#include <bits/stdc++.h>
using namespace std;
long long int myPow(long long int i, long long int i){
    long long int result = 1;
    for(int j=0; j<i; j++){
        result*=i;
    }
    return result;
}
long long int power(long long int n){
    long long int i=0;
    long long int p;
    while(p<n){
        p = myPow(i,i);
        i++;
    }
    return i;
}
int main(){
    /*  4
        9
        2
        12
        3
        1   */
    int t; cin>>t;
    for(int c=0; c<t; c++){
        long long int a; cin >> a;
        long long int b; cin >> b;
        long long int operations = 0;
        if(a>=b){
            while(b<=power(a)){
                b++;
                operations++;
            }
        }
        while(b<=a && a>0){
            a=a/b;
            operations++;
        }
        cout << operations << "\n";
    }
    return 0;
}