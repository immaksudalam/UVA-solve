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

struct arra{
    string name;
    ll base;
    ll byte;
    ll dim;
    ll upper[11];
    ll lower[11];
    ll constant[11];
};
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ll n,r ;
    ll indexes[11];
    map<string, ll> order;
    cin>>n>>r;
    arra* arrays = new arra[n];
    for(ll i=0; i<n; i++){
        cin >> arrays[i].name >> arrays[i].base >> arrays[i].byte >> arrays[i].dim;
        order[arrays[i].name] = i;
        arrays[i].constant[ arrays[i].dim ] = arrays[i].byte;
        for(ll j = 1; j <= arrays[i].dim; j++)
	    cin >> arrays[i].lower[j] >> arrays[i].upper[j];
        for(ll j = arrays[i].dim -1; j >= 1; j--)
        {
            arrays[i].constant[j] = arrays[i].constant[j+1] * (arrays[i].upper[j+1] - arrays[i].lower[j+1] + 1);
        }
    }
    for(ll i = 0; i < r; i++)
    {
	string name;
	ll address = 0;
	cin >> name;
	cout << name << '[';
	ll arrNum = order[name];
	for(ll j = 1; j <= arrays[arrNum].dim; j++)
	{
	    cin >> indexes[j];
	    if(j != 1)
		cout << ", ";
	    cout << indexes[j];
	}
	cout << "] = ";
	address += arrays[arrNum].base;
	for(ll i = 1; i <= arrays[arrNum].dim; i++)
	    address += arrays[arrNum].constant[i]*(indexes[i]- arrays[arrNum].lower[i]);


	cout << address << endl;
    }
}
