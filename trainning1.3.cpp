#include<bits/stdc++.h>
using namespace std;
const unsigned long long N = 1000000000+7;
int   sodu(int a)
{
    int sochia = a/N;
    int  sodu1= a - a/N;
    return sodu1;
}
int main()
{
    unsigned long long a,b,S;
    cin>>a>>b;
    S = sodu(a) + sodu(b);
    cout<<sodu(S)<<endl;
    return 0;
}
