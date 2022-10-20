#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6;
bitset<mx>is_prime;
vector<int>prime;
void primeGen(int n)
{
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }
    int sq=sqrt(n);

    for(int i=3;i<=sq;i+=2)
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

}

vector<int>divpow[5000012];
int store[5000012];
void NOD()
{
    for(auto p:prime)
    {
        for(int i=p;i<=5000000;i+=p)
        {

           divpow[i].push_back(p);
        }
    }
    int ret=0;
    for(int i=0;i<5000000;i++)
    {
        int sum=0;
        for(auto u:divpow[i])
        {
           sum+=u;
        }
        if(is_prime[sum]==1)
        ret++;

        store[i]=ret;
    }


}
int main()
{
optimize();
int lim=1e6;
primeGen(lim);
int divlim=5000002;
NOD();


while(1)
{
    int a,b;
    scanf("%d",&a);
    if(a==0)
    {
        break;
    }else{
      scanf("%d",&b);
      if(a==1)
        a++;
      int cnt=store[b]-store[a-1];

    cout<<cnt<<endl;

    }






}



return 0;

}
