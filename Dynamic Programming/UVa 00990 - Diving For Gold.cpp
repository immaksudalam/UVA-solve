#include <bits/stdc++.h>
using namespace std;
int weight[35], depth[35], value[35], dp[3000][35];
int taken[3000][35], mark[35];

int knapsack(int t, int n){
    if(t==0 || n<0) return 0;
    if(dp[t][n]!= -1) return dp[t][n];
    int a = (t>= weight[n])?(value[n]+knapsack(t-weight[n], n-1)):0;
    int b = knapsack(t, n-1);
    taken[t][n]=(a>b);
    return dp[t][n]=max(a,b);
}

int main()
{
    int time, w;
    bool flag=false;

    while(scanf("%d %d", &time, &w)==2){
        if(flag)cout<<endl;
        flag = true;
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cin>>depth[i]>>value[i];
            weight[i]= 3*w*depth[i];
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<=time; j++){
                dp[j][i]= -1;
                taken[j][i]=0;
            }
            mark[i]=0;
        }
        cout<<knapsack(time, n-1)<<endl;

        int cnt=0;
        for(int i=n-1; i>=0; i--){
            if(taken[time][i]){
                mark[i]=1;
                cnt++;
                time -= weight[i];
            }
        }
        cout<<cnt<<endl;
        for(int i=0; i<n; i++){
            if(mark[i]){
                cout<<depth[i]<<" "<<value[i]<<endl;
            }
        }
    }
}
