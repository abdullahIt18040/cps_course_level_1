#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e8+123;
bitset<mx>is_prime;
vector<int>prime;

void prime_gen(int n)
{
    n+=100;
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;

    }
    int sq=sqrt(n);

    for(int i=3;i<=sq;i=i+2)
    {

        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=n;j+=(i+i))
            {
                is_prime[j]=0;
            }
        }

    }
    is_prime[2]=1;
    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }






}
int main()
{
   optimization();

   int lim=1e8;
   prime_gen(lim);

   for(int i=0;i<prime.size();i+=100)
   {
       if(i<lim)
       {
           cout<<prime[i]<<endl;
       }
   }

    return 0;
}
