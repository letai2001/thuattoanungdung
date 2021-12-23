#include<bits/stdc++.h>
using namespace std;
const int N = 2000007;
vector<pair<int , int> > v;
int n;
long long dp[N] , len[N],res;
long long distance(pair<int,int> a)
{

    return a.second - a.first;
}
bool checkOverlap(pair<int, int> a , pair<int , int> b)
{
    if(a.second <b.first) return false;
    if(a.first > b.second) return false;
    return true;
}

bool checklen(pair<int , int>a , pair<int , int> b)
{
    return distance(a) < distance(b);
}


void solve()
{
    cin>>n;
	for(int i = 1 ; i<=n ; i++)
    {
        int s ,t;
        cin>>s>>t;
        v.push_back(pair<int,int> (s,t));
    }
    sort(v.begin(),v.end() ,checklen);
    for(int i = 1 ; i<=n;i++)
    {
        len[i] = distance(v[i]);
    }
    dp[1] = -1;
    if(checkOverlap(v[2] , v[1])) dp[2] = -1;
    else dp[2] =  dp[1]+ distance(v[1]);
    for(int i = 3 ; i<=n ; i++)
    {
        for(int j = i ; j>=1 ; j--)
        {

            if(checkOverlap(v[j],v[i])) continue;
            dp[i] = max(dp[2] , len[i]+len[j]);
            break;
        }
    }
    for(int i = 1 ; i<=n ; i++)
    {

    res = max(res , dp[i]);
    }
    cout<<res<<endl;

}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}
