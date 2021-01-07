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

#define N 1000000
using namespace std;


int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while (testCase-- ) {
        int n;
        scanf ("%d", &n);
        int input;

        vector <int> pos;
        vector <int> neg;

        for ( int i = 0; i < n; i++ ) {
            scanf ("%d", &input);
            if ( input > 0 ) pos.push_back (input);
            else neg.push_back (input * -1);
        }

        sort (pos.begin (), pos.end ());
        sort (neg.begin (), neg.end ());

        int curr = N;
        int cnt = 0;

        if ( pos.back () > neg.back () ) {
            curr = pos.back ();
            pos.pop_back ();
        }
        else {
            curr = neg.back () * -1;
            neg.pop_back();
        }

        cnt++;


        while ( pos.size () && neg.size () ) {
            if ( curr < 0 ) {
                while ( pos.size () ) {
                    if ( pos.back () < curr * -1 ) { curr = pos.back (); cnt++; break; }
                    pos.pop_back();
                }
            }

            else {
                while ( neg.size () ) {
                    if ( neg.back () < curr ) { curr = neg.back () * -1; cnt++; break; }
                    neg.pop_back ();
                }

            }
        }

        if ( curr < 0 ) {
            while ( pos.size () ) {
                if ( pos.back () < curr * -1 ) { curr = pos.back (); cnt++; break; }
                pos.pop_back();
            }
        }
        else {
            while ( neg.size () ) {
                if ( neg.back () < curr ) { curr = neg.back () * -1; cnt++; break; }
                neg.pop_back ();
            }
        }

        printf ("%d\n", cnt);
    }

    return 0;
}
