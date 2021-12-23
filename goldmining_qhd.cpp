#include<bits/stdc++.h>
using namespace std;
const int N = 100006;
int n , L1,L2;
int a[N];
int res[N];

void solve()
{
	cin>>n>>L1>>L2;
	int sum = 0;
	for(int i = 1 ; i<=n ; i++)
	{
		cin>>a[i];
	}
	res[0] = 0;
	memset(res , 0, sizeof(res));
	res[1] = a[1];

	for(int i = 2;  i<=n ; i++)
	{
		if(i>=L2)
		{for(int j = i-L2 ; j<=i-L1;j++)
			{res[i] = max(res[i] , a[i]+res[j]);
		}
	}
		if(i>=L1&&i<L2)
			{for(int j = 0 ; j<=i-L1;j++)
			{res[i] = max(res[i] , a[i]+res[j]);
						}}
		if(i<=L1) res[i] = a[i];
		//cout<<"res["<<i<<"] = "<<res[i]<<endl;
		sum = max(sum ,res[i]);
	}
	cout<<sum<<endl;
}
// 10 3 5
// 1  7 2 7 12 4 6 7 4 5
// 1  7 2  8 



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}