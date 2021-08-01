#include <bits/stdc++.h>
using namespace std;
#define maxprice 10000
int main()
{
    int t; cin>>t;
    while(t--){
        int p,n;
        cin>>p>>n;
        vector<int>coins(n);
        for(int i=0; i<n; i++)cin>>coins[i];
        vector<int> dp(maxprice+1, 0);

        for(int i=0; i<n; i++){
            for(int j=maxprice; j>=0; j--){
                if(dp[j] && j+coins[i]<=maxprice){
                    dp[j+coins[i]] = (dp[j+coins[i]]==0? dp[j]+1:min(dp[j+coins[i]], dp[j]+1));
                }
            }
            if(dp[coins[i]]==0)
                dp[coins[i]]=1;
        }
        vector<int>::iterator iter(find_if(dp.begin()+p, dp.end(), bind2nd(greater<int>(), 0)));
        cout<<iter - dp.begin() <<" "<<*iter<<endl;
    }
}
