#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx=1e18;
cons int len=
bitset<mx>is_prime;
vector<long long int>prime;
vector< long long int>prime_fact[mx];
typedef long long ll;

void prime_gen(ll n)
{
    for(ll i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }

    ll int sq=sqrt(n);

    for(ll int i=3;i<=sq;i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll int j=(i*i);j<=n;j+=(i+i))
            {
                is_prime[j]=0;
            }
        }
    }

    is_prime[2]=1;
    prime.push_back(2);

    for(ll int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)
            prime.push_back(i);
    }

}

 int main()
 {
    ll int lim=1e18;
     prime_gen(lim);

     for(auto p:prime)
     {
         for(ll int i=p;i<=lim;i+=p)
         {
             prime_fact[i].push_back(p);
         }
     }
ll int n,cnt=0;
cin>>n;
for(ll int i=2;i<=n;i++)
{
if(prime_fact[i].size()==2)
{
 cnt++;
}
}
cout<<cnt<<endl;


     return 0;
 }
