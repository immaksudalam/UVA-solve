#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int cnt =0;
    vector<long long>v;
    for(int i=1; i<n; i++){
        if(__gcd(arr[i-1], arr[i])==1){
            v.push_back(arr[i-1]);
        }
        else v.push_back(arr[i-1]),v.push_back(1), cnt++;
    }
    v.push_back(arr[n-1]);
    cout<<cnt<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
}
