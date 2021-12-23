#include<bits/stdc++.h>
using namespace std;
const int N = 200000+4;
long long n;
int b;
int a[N];
int max_truoc[N];
int max_sau[N];
int main()
{
	ios_base::sync_with_stdio(0);
	int res = -1;
	int max1 = 0;
	cin>>n>>b;
	a[0]  =  a[n+1] = -99999999;
	for(int i = 1 ; i<=n; i++)
	{
		cin>>a[i];

	}
	for(int i = 2 ; i<n ; i++)
	{
		max1 = max(max1,a[i-2]);
		max_truoc[i] = max(max1 , a[i-1]);
	}
	max1 = 0;
	for(int i=n-1 ; i>=2;i--)
	{
		max1 = max(max1,a[i+2]);
		max_sau[i] = max(max1 , a[i+1]);
	}
	for(int i = 2 ; i<n ; i++)
	{
		if(max_truoc[i]-a[i]>=b &&max_sau[i]-a[i]>=b)
		{
			res = max(res , max_truoc[i]-a[i] + max_sau[i]-a[i]);
		}
	}

	cout<<res<<endl;



}
