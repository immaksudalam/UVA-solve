#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start, first, second, third;
    while(cin>> start>>first>>second>>third){
        if(start==0 && first==0 && second==0 && third==0)return 0;
        int ans = 1080;
        printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
    }
}
