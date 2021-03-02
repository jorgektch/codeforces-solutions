#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int c=0; c<t; c++){
        int n,U,R,D,L;
        cin >> n >> U >> R >> D >> L;
        bool possible;
        /*
        if(
            U/n<=R && R<=n-D/n && R/n<=D && D<=n-L/n && D/n<=L && L<=n-U/n && L/n<=U && U<=n-R/n ||
            U/n<=L && L<=n-D/n && L/n<=D && D<=n-R/n && D/n<=R && R<=n-U/n && R/n<=U && U<=n-L/n)
            possible = true;
        else
            possible = false;
        */
        if(U<n-1 && R<n-1 && D<n-1 && L<n-1)
            possible = true;
        else if(U==n)
            if(R==n && D==n && L==n)
                possible = true;
            else if(R==n && D==n && L>=2)
                possible = true;
            else if(R==n && L==n && D>=2)
                possible = true;
            else if(D==n && L==n && R>=2)
                possible = true;
            else if(D==n && R==n && L>=2)
                possible = true;
            else if(L==n && R==n && D>=2)
                possible = true;
            else if(L==n && D==n && R>=2)
                possible = true;
            else if(R==n && D>=1 && L>=1)
                possible = true;
            else if(D==n && L>=1 && R>=1)
                possible = true;
            else if(L==n && R>=1 && D>=1)
                possible = true;
            else
                possible = false;
        else if(R==n)
            if(U==n && D==n && L==n)
                possible = true;
            else if(U==n && D==n && L>=2)
                possible = true;
            else if(U==n && L==n && D>=2)
                possible = true;
            else if(D==n && L==n && U>=2)
                possible = true;
            else if(D==n && U==n && L>=2)
                possible = true;
            else if(L==n && U==n && D>=2)
                possible = true;
            else if(L==n && D==n && U>=2)
                possible = true;
            else if(U==n && D>=1 && L>=1)
                possible = true;
            else if(D==n && L>=1 && U>=1)
                possible = true;
            else if(L==n && U>=1 && D>=1)
                possible = true;
            else
                possible = false;
        else if(D==n)
            if(U==n && R==n && L==n)
                possible = true;
            else if(U==n && R==n && L>=2)
                possible = true;
            else if(U==n && L==n && R>=2)
                possible = true;
            else if(R==n && L==n && U>=2)
                possible = true;
            else if(R==n && U==n && L>=2)
                possible = true;
            else if(L==n && U==n && R>=2)
                possible = true;
            else if(L==n && R==n && U>=2)
                possible = true;
            else if(U==n && R>=1 && L>=1)
                possible = true;
            else if(R==n && L>=1 && U>=1)
                possible = true;
            else if(L==n && U>=1 && R>=1)
                possible = true;
            else
                possible = false;
        else if(L==n)
            if(U==n && R==n && D==n)
                possible = true;
            else if(U==n && R==n && D>=2)
                possible = true;
            else if(U==n && D==n && R>=2)
                possible = true;
            else if(R==n && D==n && U>=2)
                possible = true;
            else if(R==n && U==n && D>=2)
                possible = true;
            else if(D==n && U==n && R>=2)
                possible = true;
            else if(D==n && R==n && U>=2)
                possible = true;
            else if(U==n && R>=1 && D>=1)
                possible = true;
            else if(R==n && D>=1 && U>=1)
                possible = true;
            else if(D==n && U>=1 && R>=1)
                possible = true;
            else
                possible = false;
        
        if(possible) cout<< "YES\n";
        else cout << "NO\n";
        
    }
}