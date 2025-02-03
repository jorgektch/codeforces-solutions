#include <bits/stdc++.h>
using namespace std;
bool isPrime(string numStr){
    int n = stoi(numStr);
    if (n<=1) return false;
    for (int i=2; i<=n/2; i++){
        if (n%i == 0) return false;
    }
    return true;
}
string check(string cad){
    int lastNoPair = 0;
    for(int i=0; i<cad.size(); i++){
        if(int(cad[i])%2 !=0) lastNoPair = i;
    }
    string temp = "";
    for(int i=0; i<=lastNoPair; i++){
        temp += cad[i];
    }
    for(int i=0; i<temp.size()-1; i++){
        for(int j=i+1; j<temp.size(); j++){
            string numStr = "";
            numStr += temp[i];
            numStr += temp[j];
            if(isPrime(numStr)) return numStr;
        }
    }
    return "-1";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string cad;
    for(int i=0; i<n; i++){
        cin >> cad;
        cout << check(cad) << endl;
    }
    
    return 0;
}