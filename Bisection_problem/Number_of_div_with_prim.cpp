#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


const int mx=1e6+123;
bitset<mx>is_prime;
vector<int>prime;

void prime_gen(int n)
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


int NOD[1234];
vector<int>vec[1234];


int main()
{
    int lim=1e3;
    prime_gen(lim);

    for(auto p:prime)
    {
        for(int i=p;i<=lim;i+=p)
        {
            int cnt=1;
            int tem=i;
            while(tem%p==0)
            {
                tem/=p;
                cnt++;
            }
            vec[i].push_back(cnt);
        }
    }

    for(int i=1;i<lim;i++)
    {
        NOD[i]=1;
        for(auto u:vec[i])
        {
            NOD[i]*=u;
        }
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a;
        cin>>a;
        cout<<NOD[a]<<endl;
    }
return 0;

}
