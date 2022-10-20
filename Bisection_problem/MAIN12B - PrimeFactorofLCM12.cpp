#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e7;
bitset<mx>is_prime;
vector<int>prime;

  void prime_gen(int n)
{
    n+=100;

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

vector<long long>factorization(long long n)
{
    vector<long long>vec;
    for(auto p:prime)
    {
        long long mul=p*p;
        if(mul>n)
        break;
        if(n%p==0)
        {
            vec.push_back(p);
            while(n%p==0)
            {
                n=n/p;
            }
        }
    }

    if(n>1)
    {
        vec.push_back(n);
    }


    return vec;
}

 int main()
 {
     int lim=1e2;
     prime_gen(lim);
     int t,k=1;
     cin>>t;
     while(t--)
     {
         set<long long>rem;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        { long long a;
        cin>>a;
            vector<long long>prime_factorization=factorization(a);
            for(auto x:prime_factorization)
            {
                rem.insert(x);
            }
        }
        cout<<"Case #"<<k<<": "<<rem.size()<<endl;
        k++;
        for(auto y:rem)
        {
            cout<<y<<endl;
        }

     }
     return 0;


 }
