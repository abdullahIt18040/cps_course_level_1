#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e7;
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
            for(int j=i*i;j<=n;j+=(i+i))
            {
                is_prime[i]=0;
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

vector<long long>factorization(long long int n)
{
    vector<long long>vec;

    for(auto p:prime)
    {
        long long int len=p*p;
        if(len>n)
            break;


            if(n%p==0)
            {vec.push_back(p);
                while(n%p==0)
                {
                    n=n/p;
                }
            }


    }
    if(n>1)
    vec.push_back(n);
    return vec;

}

 int main()
 {
optimization();
    int lim=1e7;
    prime_gen(lim);
    int t;
    cin>>t;
    while(t--)
    {
        int k=1;
    set<long long>res;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            long long int a;
            cin>>a;
            vector<long long> primefact=factorization(a);
            for(auto h:primefact)
            {
                res.insert(h);
            }

        }
        cout<<"Case #"<<k<<": "<<res.size()<<endl;
        for(auto y:res)
        {
            cout<<y<<endl;
        }
        k++;
    }
    return 0;

 }

