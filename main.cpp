#include<bits/stdc++.h>
using namespace std;
const int N  = 910;
int visited[N][N];
int a,b,c;
queue<pair<int,int>> q;
int ans[N][N];
int main()
{
	int count = 1;
	cin>>a>>b>>c;
	q.push({0,0});
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		if(x==c||y==c)
		{
			cout<<count<<endl;
			return 0;
		}
		q.pop();
		if(!visited[a][y])
		{
			visited[a][y] = 1;
			q.push({a,y});
			count++;
		}
		if(!visited[x][b])
		{
			visited[x][b] = 1;
			q.push({x,b});
			count++;
		}
		if(!visited[0][y])
		{
			visited[0][y] = 1;
			q.push({0,y});
			count++;
		}
		if(!visited[x][0])
		{
			visited[x][0] = 1;
			q.push({x,0});
			count++;
		}
		if(!visited[max(0,x+y-b)][min(x+y,b)])
		{
			visited[max(0,x+y-b)][min(x+y,b)];
			q.push({max(0,x+y-b),min(x+y,b)});
			count++;
		}
		if(!visited[min(x+y,a)][max(x+y-a,0)])
		{
			visited[min(x+y,a)][max(x+y-a,0)];
			q.push({min(x+y,a),max(x+y-a,0)});
			count++;
		}
	}
	cout<<-1<<endl;

}
// 6 trường hợp:(trong 2 bình lần lượt là x ,y)
// 	1.bơm vào a -> a,y
// 	2.bơm vào b -> x,b
// 	3.đổ bỏ a -> 0,y
// 	4.đổ bỏ b ->x , 0
// 	5.đổ  a vào b ->  max(0 , x+y-b) , min(x+y , b)
// 	6. đổ b vào a -> min(x+y , a) , max(0 , x+y-a)
