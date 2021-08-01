#include <bits/stdc++.h>
using namespace std;
int price[25][25];
bool reachable[25][210];

void print_shop(int money, int g){
    if(money <0 || g==C)return;
    for(int model=1; model<=price[g][0]; model++)
    if(shop(money-price[g][model], g+1)==memo[money][g]){
        cout<<price[g][model];
        print_shop(money-price[g][model], g+1);
    }

}
int main()
{
    int tc; cin>>tc;
    while(tc--){
        int M, C;
        cin>>M>>C;
        int money;
        for(int g=0; g<C; g++){
            cin>>price[g][0];
            for( money=1; money<=price[g][0]; money++){
                cin>>price[g][money];
            }
        }
        memset(reachable, false, sizeof(reachable));
        for(int g=1; g<=price[0][0]; g++){
            if(M-price[0][g]>= 0){
                reachable[0][M-price[0][g]]=true;
            }
        }
        for(int g=1; g<C; g++){
            for(money=0; money<M; money++){
                if(reachable[g-1][money])
                   for(int i=1; i<=price[g][0]; i++){
                     if(money- price[g][i]>= 0)
                       reachable[g][money-price[g][i]]=true;
                }
            }
        }

        for(money =0; money<=M && !reachable[C-1][money]; money++);
        if(money == M+1) cout<<"no solution"<<endl;
        else{
            cout<<M-money<<endl;
        }

    }
}
