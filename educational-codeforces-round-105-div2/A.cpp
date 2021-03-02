#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string expr) {
    stack<char> s; 
    char x; 
    for (int i = 0; i < expr.length(); i++)  {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')  
        { 
            s.push(expr[i]); 
            continue; 
        } 
        if (s.empty()) 
            return false; 
        switch (expr[i]) { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
        case ']': 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    }
    return (s.empty()); 
}
int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        string s_1 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='B' || s[j]=='C') s_1 += '(';
            else s_1 += ')';
        }
        string s_2 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='B') s_2 += '(';
            else s_2 += ')';
        }
        string s_3 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='B' || s[j]=='c') s_3 += '(';
            else s_3 += ')';
        }
        string s_4 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='c') s_4 += '(';
            else s_4 += ')';
        }
        string s_5 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='B' || s[j]=='C') s_5 += ')';
            else s_5 += '(';
        }
        string s_6 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='B') s_6 += ')';
            else s_6 += '(';
        }
        string s_7 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='B' || s[j]=='c') s_7 += ')';
            else s_7 += '(';
        }
        string s_8 = "";
        for(int j=0; j<s.length(); j++){
            if(s[j]=='A' || s[j]=='c') s_8 += ')';
            else s_8 += '(';
        }
        if(areBracketsBalanced(s_1)
            || areBracketsBalanced(s_2)
            || areBracketsBalanced(s_3)
            || areBracketsBalanced(s_4)
            || areBracketsBalanced(s_5)
            || areBracketsBalanced(s_6) 
            || areBracketsBalanced(s_7)
            || areBracketsBalanced(s_8)
        ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}