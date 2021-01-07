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
    int T, r, c, num;
    char p;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %c %d %d", &p, &r, &c);


        if (p == 'r')
        {
            num = min(r, c);
        }

        else if (p == 'k')
        {
            num = r * c / 2;
        }

        else if (p == 'Q')
        {
            num = min(r, c);
        }

        else
            num = int((r + 1) / 2) * int((c + 1) / 2);

        printf("%d\n", num);
    }
}
