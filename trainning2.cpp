#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int *a = new int [n];
   for(int i = 0 ; i<n ; i++) cin>>a[i];
   int sum = 0;
   int res = 0;
   for(int i = 0; i<n  ;i++)
   {
       sum+= a[i];
       if(sum<0) sum=  0;
       if(res<sum) res = sum;

   }
   cout<<res<<endl;

    return 0;
}

