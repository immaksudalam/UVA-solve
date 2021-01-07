
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

ll temp[1000005];

ll merge(ll arr[], ll l, ll r){
    ll mid = (l+r)/2;
    ll i  = l, j= mid+1, k=l;
    ll inverson =0;
    while (i<= mid && j<= r){
        if(arr[i]<= arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inverson+= mid - i+1;
        }
    }
    while(i<= mid) temp[k++]=arr[i++];
    while(j<= r) temp[k++]= arr[j++];
    for(i= l; i<= r; i++) arr[i]=temp[i];
    return inverson;
}
ll merge_sort(ll arr[], ll l, ll r){
    ll mid, inverson=0;
    if(r>l){
        mid = (l+r)/2;
        inverson+= merge_sort(arr, l, mid);
        inverson+= merge_sort(arr, mid+1, r);
        inverson+= merge(arr, l, r);
    }
    return inverson;
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ll n;
    while(scanf("%lld", &n) && n){
        ll arr[n];
        for(int i=0; i<n; i++)cin>> arr[i];
        ll ans = merge_sort(arr, 0, n-1);
        if(ans&1){
            cout<<"Marcelo"<<endl;
        }
        else cout<<"Carlos"<<endl;
    }
}
