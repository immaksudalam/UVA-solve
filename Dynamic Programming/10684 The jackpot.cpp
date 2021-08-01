#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1){
    cin>>n;
    if(n==0) return 0;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    long long temp=0, ans=0;
    for(int i=0; i<n; i++){
        temp+= v[i];
        if(temp>ans) ans=temp;
        if(temp<0)temp=0;
    }
    if(ans<=0){
        cout<<"Losing streak."<<endl;
    }
    else cout<<"The maximum winning streak is "<<ans<<"."<<endl;

    }
}
