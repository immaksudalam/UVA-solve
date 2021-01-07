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

bool taken[505][505];

int main()
{
    int W, H, N;
    while (cin >> W >> H >> N, W)
    {
        while (N--)
        {
            int X1, Y1, X2, Y2;
            cin >> X1 >> Y1 >> X2 >> Y2;
            if (X1 > X2)
                swap(X1, X2);
            if (Y1 > Y2)
                swap(Y1, Y2);
            for (int y = Y1 - 1; y < Y2; ++y)
                for (int x = X1 - 1; x < X2; ++x)
                    taken[y][x] = true;
        }
        int count = 0;

        for (int y = 0; y < H; ++y)
        {
            for (int x = 0; x < W; ++x)
            {
                if (!taken[y][x])
                    ++count;
                else
                    taken[y][x] = false;
            }
        }
        if (count == 0)
            cout << "There is no empty spots.\n";
        else if (count == 1)
            cout << "There is one empty spot.\n";
        else
            cout << "There are " << count << " empty spots.\n";
    }
}
