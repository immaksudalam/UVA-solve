#include <bits/stdc++.h>
using namespace std;
int M, C;
int price[25][25];
int memo[210][25];
int shop(int money, int garments){
    if(money <0)return -100000;
    if(garments == C) return M-money;

    if(memo[money][garments]!= -1) return memo[money][garments];
    int ans = -1;

    for(int model =1; model <= price[garments][0]; model++){
        ans = max(ans, shop(money - price[garments][model], garments+1));
    }
    return memo[money][garments]=ans;
}
int main()
{
   int test;
   cin>>test;
   while(test--){
      cin >>M>>C;
      for(int i=0; i<C; i++){
         cin>>price[i][0];
         for(int j=1; j<=price[i][0]; j++){
            cin>>price[i][j];
         }
      }
      memset(memo, -1, sizeof(memo));
     int score = shop(M, 0);
     if(score < 0)cout<<"no solution"<<endl;
     else cout<<score<<endl;
   }

}
