#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int max_hieu[N*2][N*2];
int main()
{
ios_base::sync_with_stdio(0);
int T;
cin>>T;
while(T--)
{
int res = 0;
int L,C;
cin>>L>>C;
vector< pair<int,int> > a;
vector< pair<int,int> > b;
for(int i = 0 ; i<L;i++)
{
    for(int j = 0 ; j<C;j++)
    {
        int k;
        cin>>k;
        if(k==1) a.push_back({i,j});
    }
}
for(int i = 0 ; i<L;i++)
{
    for(int j = 0 ; j<C;j++)
    {
        int k;
        cin>>k;
        if(k==1) b.push_back({i,j});
    }
}
for(pair<int ,int> u: a)
{
    for(pair<int,int> v : b)
    {
        pair<int ,int> c = {u.first - v.first , u.second - v.second };
        max_hieu[u.first - v.first+N][u.second - v.second +N]++;
    }
}
for(int i = 0 ; i<2*N ; i++)
{
    for(int j = 0 ; j<2*N; j++)
    {
        if(res < max_hieu[i][j]) res = max_hieu[i][j];
    }
}
cout<<res<<endl;
for(pair<int ,int> u: a)
{
    for(pair<int,int> v : b)
    {
        pair<int ,int> c = {u.first - v.first , u.second - v.second };
        max_hieu[u.first - v.first+N][u.second - v.second +N]--;
    }
}


}
}
