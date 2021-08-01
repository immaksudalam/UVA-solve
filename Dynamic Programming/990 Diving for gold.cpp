#include <bits/stdc++.h>
using namespace std;
#define MAX_N 5000
int d[MAX_N], w[MAX_N];
int memo[MAX_N][MAX_N];
int wt;
int knapsack(int time, int id){
    if(time == 0 || id== -1)return 0;
    if(memo[time][id]!=-1) return memo[time][id];
    int new_time = wt*d[id]+2*wt*d[id];
    if(new_time > time) return memo[time][id] = knapsack(time, id-1);
    return memo[time][id] = max(knapsack(time, id-1), (w[id]+knapsack(time-new_time, id-1)));
}
int main()
{
    while(1){
        memset(memo, -1, sizeof memo);
        int time;
        cin>>time>>wt;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>d[i]>>w[i];
        }
        cout<<knapsack(time, n-1)<<endl;
        int ans[35], k=0, sum=0;
        int N=0;
        for(int i=0; i<=120; i++){
            for(int j=0; j<=n; j++)cout<<memo[i][j]<<" ";
            cout<<endl;
        }
    }
}

