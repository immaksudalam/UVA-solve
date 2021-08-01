#include <bits/stdc++.h>
using namespace std;
int coins[31], t[3000], v[31], d[31], dp[3000];
int w,N;
int knapsack(int id, int w){
   for(int i=0; i<=w; i++)memo[i][0]=0;
   for(int i=0; i<=N; i++)memo[0][i]=0;

   for(int i=1; i<=N; i++){
      for(int j=w; j>0; j--){
        if(t[i] <= j)
            memo[id][w]=max(memo[id][w], v[i]+memo[id-1][j-v[i]]);
      }
   }
   return memo[id][w];
}
int main()
{
   int time;
   while(scanf("%d%d",&time, &w)==2){
    cin>>N;
      for(int i=1; i<=N; i++){
         cin>>d[i]>>v[i];
         t[i]=3*w*d[i];
      }
      cout<<knapsack(1, time)<<endl;
   }
}
