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
    long long int i,j,o=0,a,b,q,n,l,t;
    long long int arr[10001];
    cin>>t;
   // cout<<"con"<<endl;
    while(t--)
    {
       // cout<<"con"<<endl;
        cin>>a>>b;
        q=a-b;
        n=0;
        if(a==b)
        {
            ++o;
            cout<<"Case #"<<o<<": 0"<<endl;
        }


        else
        {

            for(i=1 ; i<=sqrt(q) ; i++)
            {
                if(q%i==0)
                {
                    arr[n++]=i;
                    if(q/i!=i)
                    {
                        arr[n++]=q/i;
                    }
                }
            }
            sort(arr,arr+n);
            ++o;
            cout<<"Case #"<<o<<":";
            for(j=0; j<n; j++)
            {
                if(arr[j]>b)
                 cout<<" "<<arr[j];
            }
            cout<<endl;
        }

    }
    return 0;
}
