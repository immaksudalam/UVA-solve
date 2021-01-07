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
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t; cin>> t;
    for(int test =1; test <= t; test++){
        int n, m, high, low;
        cin>> n>> m>> high>> low;
        string line;
        map<char, int> mp;
        for(int i=0; i<n; i++){
            cin>> line;
            for(int j=0; j<m; j++){
                mp[line[j]]++;
            }
        }
        //cout<< mp['A']<<endl;

            vector<int>v;
            for(auto it = mp.begin(); it != mp.end(); it++){
                v.pb((*it).second);
            }
            sort(all(v));
            reverse(all(v));
            int mx =v[0];
            for(int i=1; i<v.size(); i++){
                if(v[i]== v[0])mx+=v[i];
                else break;
            }
            int mn = (n*m)- mx;
            //cout<<mn<<endl;
            cout<<"Case "<<test<<": "<<mx*high + mn * low<<endl;

    }
}
