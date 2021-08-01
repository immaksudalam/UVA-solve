#include <bits/stdc++.h>
using namespace std;
const int N=5001;
long long dp[N];
char digits[N];
int main()
{
    while (scanf("%s", digits + 1) == 1) {
        int len;
        len = strlen(digits + 1);
        if (len == 1 && digits[1] == '0') break;
        for(int i=1; i<len; i++) digits[i]=digits[i]-'0';

        dp[0]=dp[1]=1;
        for(int i=2; i<=len; i++){
            if(digits[i]==0) dp[i]=0;
            else dp[i]=dp[i-1];

            if(digits[i-1] ==2 && digits[i]>6) continue;
            if(digits[i-1]>2 || digits[i-1]==0) continue;

            dp[i]+= dp[i-2];
        }
        cout<<dp[len]<<endl;
    }
}
