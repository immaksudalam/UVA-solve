#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    vector<int> d(n, 1), p(n, -1);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(v[j]< v[i] && d[i]<d[j]+i){
                d[i]=d[j]+1;
                p[i]=j;
            }
        }
    }
    int ans = d[0], pos=0;
    for(int i=1; i<n; i++){
        if(d[i]>ans){
            ans = d[i];
            pos=i;
        }
    }

    vector<int> subseq;
    while(pos!= -1){
        subseq.push_back(v[pos]);
        pos=p[pos];
    }
    reverse(subseq.begin(), subseq.end());

    for(auto x: subseq){
        cout<<x<<" ";
    }cout<<endl;
}
