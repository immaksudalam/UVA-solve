#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool f=true;
    while(getline(cin, s)){
     for(int i=0; i<s.size(); i++){
        if(s[i]=='"'){
            if(f) cout<<"``";
            else cout<<"''";
            f=!f;
        }
        else cout<<s[i];

     }
     cout<<endl;
   }
}
