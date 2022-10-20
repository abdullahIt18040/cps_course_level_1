#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6;
bitset<mx>is_prime;
vector<int>prime;
void prime_gen(int n)
{
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }

    int len=sqrt(n);
    for(int i=3;i<=len;i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=(i*i) ;j<=n;j+=(i+i))
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
int NumDiv[1234];
vector<int>vec[mx];

void NOD()
{

for(auto p:prime)
{
   for(int i=p;i<=mx;i+=p)
    {
     int cnt=1;
     int tem=i;
     while(tem%p==0)
     {
         cnt++;
         tem=tem/p;
     }
     vec[i].push_back(cnt);
    }
}

for(int i=1;i<=mx;i++)
{
    NumDiv[i]=1;
    for( auto u:vec[i])
    {
        NumDiv[i]*=u;
    }
}

}

int main()
{


    optimization();
    int lim=1e6;
    prime_gen(lim);
    int tc;

    cin>>tc;

    while(tc--)
    {
        int a;
        cin>>a;
      cout<<NumDiv[a]<<endl;

    }



}
