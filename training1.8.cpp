#include <iostream>
using namespace std;
int main()
{
  int n ,m;
  int temp = 0;
  int res = 0;
  cin>>n;
  int *a = new int [n];
  for(int i = 0;  i<n; i++) cin>>a[i];
  cin>>m;
  int *b = new int [m];
  for(int i = 0 ; i<m ; i++) cin>>b[i];
  for(int i = 0 ; i<n ; i++)
  {
      for(int j=  0 ; j <m ;j++)
        if(a[i]==b[j]) temp++;

  }
  if(temp==m) res = 1;
    else res = 0;
    cout<<res<<endl;
    return 0;

  }
