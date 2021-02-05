#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int c=0; c<t; c++){
        int px, py;
        string s;
        cin >> px; cin >> py;
        cin >> s;
        int x_left = 0, x_right = 0, y_down = 0, y_up = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'U'){
                y_up++;
            }else if(s[i] == 'R'){
                x_right++;
            }else if(s[i] == 'D'){
                y_down--;
            }else if(s[i] == 'L'){
                x_left--;
            }
        }
        if(x_right+x_left == px && y_up+y_down == py){
            cout << "YES\n";
        }else{
            if(px>=0 && x_right>=px){
                if(py>=0 && y_up>=py){
                     cout << "YES\n";
                }else{
                    if(py<=0 && y_down<=py){
                        cout << "YES\n";
                    }else{
                        cout << "NO\n";
                    }
                }
            }else{
                if(px<=0 && x_left<=px){
                    if(py>=0 && y_up>=py){
                        cout << "YES\n";
                    }else{
                        if(py<=0 && y_down<=py){
                            cout << "YES\n";
                        }else{
                            cout << "NO\n";
                        }
                    }
                }else{
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}