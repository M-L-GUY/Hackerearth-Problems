#include<bits/stdc++.h>
using namespace std;
bool prime[10001];
void sieve()
{
prime[0]=true;
prime[1]=true;
for(int i=2;i*i<10001;i++)
{
    if(prime[i]==false)
    {
        for(int j=i*i;j<10001;j+=i)
        {
            prime[j]=true;
        }
    }
}
}
int main()
{
    int l,r;
    cin>>l>>r;
    sieve();
    for(int i=l;i<=r;i++)
    {
        if(prime[i]==false)
        {
            cout<<i<<" ";
        }
    }
}