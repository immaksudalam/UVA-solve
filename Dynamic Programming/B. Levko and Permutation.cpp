#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    if(n==k) {cout<<-1<<endl; return 0;}
    for(int i=1; i<n-k; i++){
        cout<<i+1<<" ";
    }
    cout<<1<<" ";
    for(int i=n-k; i<n; i++)cout<<i+1<<" ";
    cout<<endl;


}
