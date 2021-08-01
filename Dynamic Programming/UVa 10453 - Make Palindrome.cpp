#include <bits/stdc++.h>
using namespace std;
#define siz 1000
static char x[siz], y[siz];
int dp[siz][siz];
vector<char> vc;
void backtrace(int n, int m)
{
    if(n==0 || m==0) return;
    else if(x[n-1]==y[m-1]){
        backtrace(n-1, m-1);
        vc.push_back(x[n-1]);
    }
    else{
        if(dp[n][m-1]> dp[n-1][m])
            backtrace(n, m-1);
        else backtrace(n-1, m);
    }
}
void lcm(int n, int m)
{
   memset(dp, 0, sizeof(dp));
   for(int i=0; i<=n; i++)dp[i][0]=0;
   for(int j=0; j<=m; j++) dp[0][j]=0;

   for(int i=1; i<=n; i++)
   {
       for(int j=1; j<=m; j++){
        if(x[i-1]==y[j-1])
            dp[i][j]= 1 + dp[i-1][j-1];
        else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
       }
   }
}
int main()
{
    while(scanf("%s", x) == 1)
    {
        int n=strlen(x);
        for(int i=n-1,j=0; i>=0; i--, j++){
            y[j]=x[i];
        }
        vc.clear();
        int m = strlen(y);
        lcm(n,m);
        backtrace(n,m);
        for(int i=0; i<vc.size(); i++){
            cout<<vc[i];
        }cout<<endl;

    }
}
