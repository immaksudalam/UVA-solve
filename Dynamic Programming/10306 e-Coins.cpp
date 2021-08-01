#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
int emodulus;
int dp[301][301][40];
pair<int, int> coordinates[40];

int getNumberOfCoins(int x, int y, int i)
{
    if(x*x+ y*y == emodulus*emodulus) return 0;
    if(x*x + y*y > emodulus*emodulus) return INF;
    if(i<0) return INF;
    if(dp[x][y][i] != -1) return dp[x][y][i];

    return dp[x][y][i]= min(getNumberOfCoins(x, y, i-1), 1+getNumberOfCoins(x+coordinates[i].first, y+coordinates[i].second, i));

}

int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n>>emodulus;
        for(int i=0; i<n; i++)cin>>coordinates[i].first>>coordinates[i].second;
        memset(dp,-1, sizeof(dp));
        int ans = getNumberOfCoins(0, 0, n-1);
        if(ans == INF){
            cout<<"not possible"<<endl;
        }
        else cout<<ans<<endl;
    }
}
