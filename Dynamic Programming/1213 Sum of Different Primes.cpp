#include <bits/stdc++.h>
using namespace std;
#define N 1120
char primes[N];
int pnumbers[187];
unsigned int dp[N+1][187][15];

unsigned int nWays(int money, int i, int k){
    if(!money && !k)return 1;
    if(money<0 || i>=187 || k==0) return 0;
    if(dp[money][i][k]!=-1)return dp[money][i][k];
    return dp[money][i][k] = nWays(money, i+1, k)+ nWays(money-pnumbers[i], i+1, k-1);
}
int main()
{

    memset(primes,0,sizeof(primes));
    primes[0]=primes[1]=1;
    for(int i=2;i*i<N;i++)
        if(!primes[i])
            for(int j=i*i;j<N;j+=i)
                primes[j]=1;
    for(int i=0;i<=N;i++)
        for(int j=0;j<187;j++)
            for(int k=0;k<15;k++)
                dp[i][j][k]=-1;
    int j = 0;
    for(int i=2;i<N;i++)
        if(!primes[i])
            pnumbers[j++]=i;
    //for(int i=0; i<15; i++)cout<<pnumbers[i]<<" ";
    int money, k;
    while(scanf("%d %d", &money, &k)==2){
        if(money==0 && k==0)return 0;
        cout<<nWays(money, 0, k)<<endl;
    }
}
