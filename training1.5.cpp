#include <iostream>
#include<math.h>
#include<vector>
using namespace std;
unsigned long long S = 1000000000+7;
int   sodu(unsigned long long a)
{
    int sochia = a/S;
    int  sodu1= a - sochia*S;
    return sodu1;
}
int main()
{
    int n;
    int sum = 0;
    cin>>n;
    int *a = new int [n];
    for(int i=  0 ; i<n ; i++)
    {
        cin>>a[i];
        a[i] = sodu(a[i]);
        sum += a[i];
        sum = sodu(sum);
    }
    cout<<sum<<endl;

}

