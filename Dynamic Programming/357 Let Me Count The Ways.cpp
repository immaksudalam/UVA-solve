#include <bits/stdc++.h>
using namespace std;
int N;
long long dp[30001][6];
int coin[5]={1, 5, 10, 25, 50};
long long change(int money, int id){
    if(money==0) return 1;
    if(dp[money][id] !=-1) return dp[money][id];
    long long ways=0;
    for(int i=id; i<5; i++){
        if(money >= coin[i])
            ways+= change(money-coin[i], i);
    }
    return dp[money][id] =ways;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &N)==1){
        long long ans = change(N, 0);
        if(ans ==1){
            cout<<"There is only "<<ans<<" way to produce "<<N<<" cents change."<<endl;
        }
        else cout<<"There are only "<<ans<<" ways to produce "<<N<<" cents change."<<endl;
    }
}
