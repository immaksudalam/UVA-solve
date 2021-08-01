#include <bits/stdc++.h>
using namespace std;
int price[1000], weight[1000];
int memo[10000][100];
int knapsack(int w, int n){
    if(n<0)return 0;
    if(memo[w][n]!=-1)return memo[w][n];
    if(weight[n]> w) return memo[w][n] = knapsack(w, n-1);
    return memo[w][n] = max(knapsack(w, n-1), price[n] + knapsack(w-weight[n], n-1));
}
int main()
{
    int n, m;
    cin>> n>>m;
    memset(memo, -1, sizeof(memo));
    for(int i=0; i<m; i++){
        cin>>weight[i]>>price[i];
    }
    cout<<knapsack(n, m-1)<<endl;
}
