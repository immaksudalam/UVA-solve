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
    char line[100001];
    while(scanf("%s", line)!= EOF){
        list<char> l;
        auto it = l.begin();
        int lin = strlen(line);
        for(int i=0; i<lin; i++){
            if(line[i]=='[') it = l.begin();
            else if(line[i]==']') it = l.end();
            else l.insert(it, line[i]);
        }
        for(auto it = l.begin(); it != l.end(); it++){
            printf("%c", *it);
        }
        cout<<endl;
    }

}
