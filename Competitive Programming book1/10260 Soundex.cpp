#include <bits/stdc++.h>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 100
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int


using namespace std;


int main()
{
    freopen("input.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    string line;
    while(cin>> line){
        map<char, int> mp;
        mp['B']=1;
        mp['F']=1;
        mp['P']=1;
        mp['V']=1;
        mp['C']=2;
        mp['G']=2;
        mp['J']=2;
        mp['K']=2;
        mp['Q']=2;
        mp['X']=2;
        mp['S']=2;
        mp['Z']=2;
        mp['D']=3;
        mp['T']=3;
        mp['L']=4;
        mp['M']=5;
        mp['N']=5;
        mp['R']=6;
        bool track = true;
        vector<int> v;
        if(mp[line[0]] != 0){
            v.push_back(mp[line[0]]);
        }
        for(int i=1; i< line.size(); i++){
            if(mp[line[i]] == mp[line[i-1]]){
                continue;
            }
            else{
                if(mp[line[i]] != 0){
                    v.push_back(mp[line[i]]);
                }
                track= false;
            }
        }
        for(int i=0; i<v.size(); i++){
            cout<< v[i];
        }cout<<endl;



    }

}
