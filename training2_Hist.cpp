#include<bits/stdc++.h>
using namespace std;
vector <long long> L;
vector<long long> R;//vi tri gan nhat ben phai nho hon vt[i]
vector<long long > vt;
stack<long long> st;
long long N;


void output()
{
		while(true)
	{
		cin>>N;
		if(N<=0) return;
		vt.push_back(-1);
		for(int i = 1 ; i<=N ; i++)
		{
			int a;
			cin>>a;
			vt.push_back(a);
		}
		vt.push_back(-1);
		L.resize(N+2);
        R.resize(N+2);
		for(int i = 1 ; i<=N+1 ; i++)
		{
			while(!st.empty()&&vt[i]<vt[st.top()])
			{
				R[st.top()] = i ;
				st.pop();
			}
			st.push(i);
		}
		for(int i = N ; i>=0 ; i--)
		{
			while(!st.empty()&&vt[i]<vt[st.top()])
			{
				L[st.top()] = i ;
				st.pop();
			}
			st.push(i);
		}
		long long max = 0;
		for(int i = 1; i<=N ; i++)
		{
		  long long f = (R[i] - L[i] -1 )*vt[i];
		  if(f>max) max = f;
		}
		cout<<max<<endl;

		vt.erase(vt.begin(),vt.end());
        L.erase(L.begin(),L.end());
        R.erase(R.begin(),R.end());
/* Lưu ý phải xoa de bat dau vong lap*/
	}

}
int main ()
{
output();
}
///su dung cong thuc (R[i] - L[i] -1)*vt[i]
//R[i] la vi tri gan nhat ben phai nho hon vt[i]
//L[i] la vi tri gan nhat ben trai nho hon vt[i]
/* suy ra do dai canh day  = R[i] - L [i] .
Dung stack để tính các giá trị L và R .
Ví dụ R[i] xét vòng for từ 1 đến n+1 , trong stack lưu giá trị vị trí tăng dần mà nó chưa tìm được R[i]
Khi gặp được thằng có giá trị vt[] bé hơn thì vị trị ý đã tìm được R và bị pop ra luôn.*/
