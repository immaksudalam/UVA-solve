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
int n, M;
using namespace std;
bool SortFunc(int i, int j)
{
    if (i % M != j % M)
        return i % M < j % M;
    if (i & 1) // i is odd
    {
        if (j & 1)
            return i > j;
        return true;
    }
    if (j & 1)
    {
        return false;
    }
    return i < j;
}

int main()
{
    int N;

    vector<int> numbers(10005);

    while (cin >> N >> M, cout << N << ' ' << M << '\n', N)
    {
        for (int i = 0; i < N; ++i)
        {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.begin() + N, SortFunc);
        ;
        for (int i = 0; i < N; ++i)
            cout << numbers[i] << '\n';
    }
}
