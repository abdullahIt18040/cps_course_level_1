
#include<bits/stdc++.h>
using namespace std;
#define  endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e8+123;
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

vector<long long> prime_factor(long long m)
{
    vector<long long>st;

    long long num=m,mx_val=-1;
    for(auto p:prime)
    { long long res=(p*p);
        if(res>m)
        {
            break;
        }else{

        if(m%p==0)
        {
            while(m%p==0)
            {
                m=m/p;
                st.push_back(p);
            }
         }

        }
    }
    if(m>1)
        st.push_back(m);


    return st;


}

 int main()
 {
     optimization();
     int lim=1e7;
     prime_gen(lim);

   while(1)
   {
          long long m;
         cin>>m;
         m=abs(m);
         if(m==0)
            break;
            else{
                vector<long long>fac=  prime_factor(m);

                if(fac.size()<=1)
                {
                    cout<<"-1"<<endl;
                }else{
                cout<<fac.back()<<endl;
                }
            }

   }
   return 0;

 }
