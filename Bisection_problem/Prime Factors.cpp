#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
const long long int mx=1e15;

bitset<mx>is_prime;
vector<ll>prime;

void prime_gen(long long int  n)
{
n+=100;
    for(ll i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }
    ll len=sqrt(n);
    for(ll i=3;i<=len;i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i;j<=n;j+=(i+i))
            {
                is_prime[j]=0;
            }

        }
    }

    is_prime[2]=1;
    prime.push_back(2);
    for(ll i=3;i<=n;i++)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }

    }



}

ll prime_factor(ll n)
{
int mxval=-1;
    vector<ll>st_pm;
    for(auto p:prime)
    {
        if( ll(p*p)>n)
        {
            break;
        }else{
        while(n%p==0)
        {
           st_pm.push_back(p);
           n=n/p;
           if(mxval<p)
           {
               mxval=p;
           }
        }

        }
    }
    if(n>1)
    {
        if(mxval<n)
            mxval=n;

        st_pm.push_back(n);
    }



    return mxval;
}

 int main()
 {
optimization();
ll  lim=1e14;
prime_gen(lim);
 while(1)
 {
     ll n;
cin>>n;
if(n==0)
    break;
else{
    if(is_prime[n])
 {
     cout<<"-1"<<endl;
 }else{
ll  number=prime_factor(n);
cout<<number<<endl;

 }

 }
}










return 0;


 }
