#include<bits/stdc++.h>
using namespace std;
const int MAX = 1008;
int n , k1 ,k2;
int dp[MAX];

void solve()
{
    cin>>n>>k1>>k2;
    dp[0] = dp[1] = 1;
    for(int i = 2 ; i<=n+1 ; i++)
    {
        for(int j = k1 ; j<=k2 &&(i-j-1)>=0 ; j++ )
        {
            dp[i] +=dp[i-j-1];
        }
    }
    cout<<dp[n]+dp[n+1];

}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}
