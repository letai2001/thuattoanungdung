#include<bits/stdc++.h>
using namespace std;
const int N = 507;
int m , k;
long long p[N];
int ans[N] , b[N];
long long l , r;
long long mid;
bool check(long long max)
{
long long sum = 0;
int cnt =  0;

memset(b , 0  , sizeof(b));
for(int i = m  ; i>=1 ; i--)
{
	if(sum + p[i]<=max&& i >= k - cnt) sum+=p[i]; //khi sum chua dat denn max va van con sach de chia
	else 
	{
		sum = p[i];       //khong thi dua lai sum = p[i] khong phai bang 0
		cnt++;
		b[i] = 1;

	}


}
if(k-1==cnt)
	{ 
		for(int i = 1 ; i<=m+1;i++)
		{
			ans[i] = b[i];
		}
		return true;
	}
	
return false;
}
void solve()
{
cin>>m>>k;
l = r  = mid = 0;
for (int i = 1; i <=m; ++i)
{
		cin>>p[i];
		if(l<p[i]) l  = p[i];
		r  += p[i];
	}
while(l<=r)
{
		 mid = (l+r)/2;
		 if(check(mid)) r = mid-1;
		 else l = mid+1;
}
for(int i = 1 ; i<=m ; i++)
{
	if(ans[i]==1) 
		{
			cout<<p[i]<<" "<<"/"<<" ";
		
		}
	else cout<<p[i]<<" ";
}
cout<<endl;
memset(ans , 0 , sizeof(ans));

}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
	solve();
}
}