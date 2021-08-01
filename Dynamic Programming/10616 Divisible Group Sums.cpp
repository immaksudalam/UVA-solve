#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[205][15][25];
int d, m, q, n, arr[205];

int knapsack(int i, int cnt, int sum){
    if(cnt == m) return dp[i][cnt][sum]= (sum%d? 0: 1);
    if(i==n) return 0;
    if(dp[i][cnt][sum]!=-1)return dp[i][cnt][sum];

    return dp[i][cnt][sum]=knapsack(i+1, cnt+1, ((sum+arr[i])%d +d)%d)+knapsack(i+1, cnt, sum);
}
int main()
{
    int test=1;
    while(scanf("%d %d", &n, &q)==2){
        if(n==0 && q==0)return 0;
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<"SET "<<test++<<":"<<endl;
        for(int i=0; i<q; i++){
            cin>>d>>m;
            memset(dp, -1, sizeof(dp));
            cout<<"QUERY "<<i+1<<": "<<knapsack(0, 0, 0)<<endl;
        }
    }
}
