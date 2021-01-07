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


int main() {
    int t;
    string line;
    scanf("%d", &t);
    getchar();
    while(t--) {
        getchar();
        int idx[5000], n = 1, i = 1;
        string x[5000];
        getline(cin, line);
        stringstream sin;
        sin << line;
        while(sin >> idx[n])
            n++;
        getline(cin, line);
        sin.clear();
        sin << line;
        while(sin >> x[idx[i]])
            i++;
        for(i = 1; i < n; i++)
            cout << x[i] << endl;
        if(t)
            puts("");
    }
    return 0;
}
