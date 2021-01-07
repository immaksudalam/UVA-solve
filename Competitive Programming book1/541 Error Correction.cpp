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
    int n;
    while(cin>> n && n){
        int arr[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) cin>>arr[i][j];
        int c[n]={0}, r[n]={0};
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            c[i]+= arr[i][j];
            r[i]+= arr[j][i];
        }
        int a=0, b=0;
        int p1, p2;
        for(int i=0; i<n; i++){
            if(c[i]&1) a++, p1= i;
            if(r[i]&1) b++, p2=i;
        }
        if(a == 0 &&  b== 0)
			puts("OK");
		else if(a == 1 && b == 1)
			printf("Change bit (%d,%d)\n", p1+1, p2+1);
		else
			puts("Corrupt");
    }

}
