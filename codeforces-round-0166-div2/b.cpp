#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
}
int incementToPrime(int n){
    int n_copy = n;
    int increment = 0;
    while(!isPrime(n_copy+increment)){
        increment ++;
    }
    return increment;
}
int main(){
    int n, m;
    cin >> n >> m;
    int mrc;
    vector<vector<int>> a;
    for(int r=0; r<n; r++){
        vector<int> row_temp;
        for(int c=0; c<m; c++){
            cin >> mrc;
            row_temp.push_back(mrc);
        }
        a.push_back(row_temp);
    }
    long long int min_increment = 50000001;
    for(int r=0; r<n; r++){
        long long int acum = 0;
        for(int c=0; c<m; c++){
            acum += incementToPrime(a[r][c]);
        }
        if(acum<min_increment)
            min_increment = acum;
    }
    
    for(int c=0; c<m; c++){
        long long int acum = 0;
        for(int r=0; r<n; r++){
            acum += incementToPrime(a[r][c]);
        }
        if(acum<min_increment)
            min_increment = acum;
    }
    cout << min_increment;
    return 0;
}