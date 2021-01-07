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
    int t;
    cin>> t;
    for(int test=1; test<= t; test++){
        int term1, term2, finl, attendence;
        cin>> term1>> term2>> finl>> attendence;
        vector<int>v(3);
        for(int i=0; i<3; i++)cin>> v[i];
        sort(all(v));
        reverse(all(v));
        int avarage = (v[0]+ v[1])/2;
        int ans = term1 + term2+ finl+ attendence+ avarage;
        if(ans>= 90){
            cout<<"Case "<<test<<": "<< 'A'<<endl;
        }
        else if(ans>= 80){
            cout<<"Case "<<test<<": "<< 'B'<<endl;
        }
        else if(ans>= 70){
            cout<<"Case "<<test<<": "<< 'C'<<endl;
        }
        else if(ans >= 60){
            cout<<"Case "<<test<<": "<< 'D'<<endl;
        }
        else cout<<"Case "<<test<<": "<< 'F'<<endl;
    }
}
