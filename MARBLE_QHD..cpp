#include<bits/stdc++.h>
using namespace std;
int W,H,N ;
const int MAX = 604;
int w[MAX] , h[MAX];
int dp[MAX][MAX];
//dp[i][j] : dien tich it nhat bi cat bo khi khoi da co dien tich ixj
//ket qua la dp[w][h]
void solve()
{
    cin>>W>>H>>N;
    for(int i = 1 ; i<=N ; i++) cin>>w[i]>>h[i];
    for(int i =1;  i<=W ; i++)
    {

    for(int j =1 ; j<=H ; j++)
    {

    dp[i][j] = i*j;
    for(int k = 1 ; k<=N ; k++)
    {
        if(i==w[k]&&j==h[k])
        {
            dp[i][j] = 0;
            break;
        }
    }
    for(int k = 1 ; k<i ; k++)
    {
        dp[i][j] = min(dp[i][j] , dp[k][j]+ dp[i-k][j]);
    }
    for(int k = 1 ; k<j ; k++)
    {
        dp[i][j]  = min(dp[i][j] , dp[i][k]+dp[i][j-k]);
    }

    }
    }
    cout<<dp[W][H]<<endl;

}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}
