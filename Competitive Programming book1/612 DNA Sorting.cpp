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

bool cmp(pair<pair<int,int> ,string>a, pair<pair<int,int>, string>b){
    if(a.first.first != b.first.first) return a.first.first < b.first.first;
    else return a.first.second < b.first.second;
}
int main()
{
    freopen("input.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    cin>> t;
     while(t--){
        getchar();
        int n, m;
        cin>> n>> m;
        map<pair<int, int>, string>mp;
        for(int tt=1; tt<=m; tt++){
            string s;
            cin>> s;
            string temp = s;
            int cnt =0;
            for(int i=0; i<s.size(); i++){
                for(int j =1; j<s.size(); j++){
                    if(s[j]<s[j-1]){
                        cnt++;
                        swap(s[j], s[j-1]);
                    }
                }
            }
            s= temp;
            mp[make_pair(cnt, tt)]=s;
        }
        vector<pair<pair <int,int>, string> >vp;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            vp.push_back({make_pair((*it).first.first,(*it).first.second), (*it).second});
            //cout<< (*it).first<<" "<<(*it).second.first<<" "<<(*it).second.second<<endl;
        }
        //cout<<vp.size()<<endl;
        sort(all(vp), cmp);
        for(int i=0; i<vp.size(); i++){
            cout<<vp[i].second<<endl;
        }
        if(t)
            puts("");
    }
}
