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
    int t; cin>>t;
    for(int test =1; test<= t; test++){
        vector <pair<int, string> >v, ans;
        int mx = INT_MIN;
        for(int i=0; i<10; i++){
            int a;
            string s;
            cin>>s>>a;
            v.push_back({a,s});
            mx = max(mx, a);
        }
        for(int i=0; i<10; i++){
            if(v[i].first == mx) ans.push_back({v[i].first, v[i].second});
        }
        cout<<"Case #"<<test<<":"<<endl;
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i].second<<endl;
        }
    }
}
