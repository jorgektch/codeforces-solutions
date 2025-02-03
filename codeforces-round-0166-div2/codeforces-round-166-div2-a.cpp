#include<bits/stdc++.h>
using namespace std;
bool is_beautiful(int n){
    string n_str = to_string(n);
    map<char, bool> map_str;
    for(auto c: n_str){
        map_str[c] = true;
    }
    if(n_str.size() == map_str.size()) return true;
    else return false;
}
int main(){
    int y; cin >> y;
    bool is_found = false;
    y++;
    do{
        if(is_beautiful(y)) is_found = true;
        else y++;
    }while(!is_found);
    
    cout << y;
    return 0;
}