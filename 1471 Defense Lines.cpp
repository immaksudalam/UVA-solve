#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        set<pair<int, int>>st;
        for(int i=0; i<n; i++){
            st.insert({v[i], i});
            auto it = st.find({v[i], i});
            it++;
            if(it!= st.end()) st.erase(it);
        }
        for(auto &it:st){
            cout<<(it).first<<endl;
        }
    }
}
