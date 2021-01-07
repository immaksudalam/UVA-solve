#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while(getline(cin, line)){
        stringstream sin(line);
        int n=0;
        vector<int>v, vv;
        int a;
        while(sin >> a){
           v.push_back(a);
           vv.push_back(a);
           n++;
        }
        for(int k=0; k<n; k++){
            cout<<v[k]<<" ";
        }cout<<endl;
        sort(vv.begin(), vv.end());
        pair<int,int>valp={0,0};
        bool f=false;
       // cout<<"hello"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j+i<n; j++){
                if(v[j]>valp.first) valp={v[j], (n-j)};
            }
            if(valp.second==0){
                   f=true;
            }
            if(f){

               }
            else{
                   if(i+1 == valp.second){
                       bool flag=true;
//                       for(int k=0; k<n; k++){
//                         cout<<vv[k]<<" ";
//                       }cout<<endl;
                       for(int k=0; k<n; k++){
                         if(vv[k]!=v[k])flag=false;
                       }
                       if(flag==true){
                        cout<<0<<endl;
                        break;
                       }
                   }
                   else{
                       if(valp.second!=n)cout<<valp.second<<" ";
                       if(valp.second!=n)reverse(v.begin(), v.begin()+(n-valp.second+1));
                       //for(int i=0; i<n; i++)cout<<v[i]<<" ";cout<<endl;
                       reverse(v.begin(), v.begin()+(n-i));
                       cout<<(i+1)<<" ";
                       //for(int i=0; i<n; i++)cout<<v[i]<<" ";cout<<endl;
                   }

                   //for(int i=0; i<n; i++)cout<<v[i]<<" ";
                   valp={0,0};
               }

        }
    }
}
