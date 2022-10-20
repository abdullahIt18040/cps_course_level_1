
#include<bits/stdc++.h>
using namespace std;
const int mx=1e8;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bitset<mx>is_prime;
vector<int>prime;

void primeGen(int n )
{
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }
    int sq=sqrt(n);
    for(int i=3;i<=sq;i++)
    {
        if(is_prime[i]==1)
        {
            for(int j=(i*i);j<=n;j+=(i+i))
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
}

long long int SOD(long long n)
{
    long long ret=1;
    for(auto p:prime)
    {
        long long len=p*p;
        if(len>n)
            break;

        if(n%p==0)
        {

            long long currpow=p;
            while(n%p==0)
            {
                currpow*=p;

                n/=p;
            }
            ret*=((currpow-1)/(p-1));
        }

    }

    if(n>1)
        ret*=(n+1);

    return ret;
}

int main()
{
    optimization();
    int lim=1e8;
    primeGen(lim);
int tc;
cin>>tc;
while(tc--)
{

   long long n;
   cin>>n;
   cout<<SOD(n)-n<<endl;
}




    return 0;

}
