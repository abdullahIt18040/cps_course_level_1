#include<bits/stdc++.h>
using namespace std;
const int mx=1e7+123;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bitset<mx>is_prime;
vector<int>prime;

void prime_gen(int n)
{
    for(int i=3;i<=n;i+=2)
    {

            is_prime[i]=1;

    }

    for(int i=3;i<=n;i+=2)
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
            prime.push_back(i);
    }
for(auto p:prime)
{
    cout<<p<<" ";
}

}




 int main()
 {
     int lim=1e6;
     prime_gen(lim);
     cout<<prime.size();




 }
