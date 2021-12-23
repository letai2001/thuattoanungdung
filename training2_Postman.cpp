#include<bits/stdc++.h>
using namespace std;
const int N  = 1010;
int n , k;
vector < pair<int , int> >a,b;

long long  solve( vector <pair<int,int> > &a )
{
long long res = 0;
sort(a.begin() , a.end());
for(int i = a.size()-1 ; i>=0;i--)
{
	int num = ((a[i].second)+(k-1))/k;
	 res += 1ll*num*2*a[i].first;
	int h = num*k;
	for(int j = i ; j>=0 ;j--)
	{
		int need = min(h,a[j].second);
		h -= need;
		a[j].second  -=  need;
		if(h==0) break;
	}


}
return res;

}
int main ()
{
	cin>>n>>k;

for(int i = 1 ; i<=n;  i++)
{
	int x ,m;
	cin>>x>>m;
	if(x>=0) a.push_back({x,m});
	else b.push_back({-x,m});


}
cout<<solve(a)+solve(b)<<endl;
}
