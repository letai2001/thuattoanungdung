#include <iostream>
#include<math.h>
using namespace std;
unsigned long long N = 1000000000+7;

int   sodu(unsigned long long a)
{
    int sochia = a/N;
    int  sodu1= a - sochia*N;
    return sodu1;
}
unsigned long long dongdu(unsigned long long b)
{
    unsigned long long sochia  = b/N;
    int sodu  = b - sochia*N;
    return sochia+sodu;
}
unsigned long long amub(unsigned long long a , unsigned long long b)
{
    long res = 1;
    while(b>0)
    {
        if(b%2>0 ) res = res*a%N;
        a  = a*a%N;
        b >>=1;
    }
    return (int ) res;

}
int main()
{
    unsigned long long a,b;
    cin>>a>>b;
    a = sodu(a);
    b = dongdu(b);
    unsigned long long S = amub(a,b);
    cout<<sodu(S)<<endl;
    return 0;


}
