#include <bits/stdc++.h>
using namespace std;
const int mx =5005;
int xl[mx], xr[mx], yl[mx], yr[mx];
int ansx[mx], ansy[mx];
int n;
bool solve(int *a, int *b, int *c)
{
    for(int col=1; col<=n; col++){
        int rook = -1;
        int minb= n+1;
        for(int i=0; i<n; i++){
            if(c[i]<0 && b[i]<minb && a[i]<= col){
                rook = i;
                minb = b[i];
            }
        }
        if(rook <0 || col > minb){
            return false;
        }
        c[rook]=col;
    }
    return true;
}
int main()
{
    while(cin>>n && n){
        for(int i=0; i<n; i++){
            cin>>xl[i]>>yl[i]>>xr[i]>>yr[i];
        }
        memset(ansx, -1, sizeof(ansx));
        memset(ansy, -1, sizeof(ansy));
        if(solve(xl, xr, ansx) && solve(yl, yr, ansy)){
            for(int i=0; i<n; i++){
                cout<<ansx[i]<<" "<<ansy[i]<<endl;
            }
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}
