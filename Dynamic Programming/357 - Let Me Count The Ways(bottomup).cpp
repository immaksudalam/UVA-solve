#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long dp[30001];
    memset(dp, 0, sizeof(dp));
    int coin[5]={1, 5, 10, 25, 50};
    dp[0]=1;
    for(int i=0; i<5; i++){
        for(int j=coin[i]; j<=30000; j++){
            dp[j]+= dp[j-coin[i]];
        }
    }
    long long money;
    while(scanf("%d", &money)==1){
        cout<<dp[money]<<endl;
    }
}
