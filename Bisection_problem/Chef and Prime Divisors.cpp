#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx=1e9;
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

vector<long long> factorization(long long int n)
{
vector<long long>rest;
for(auto p:prime)
{
    long long len=p*p;
    if(len>n)
        break;
        if(n%p==0)
        {
            rest.push_back(p);
            while(n%p==0)
            {
                n=n/p;
            }
        }


}

if(n>1)
{
    rest.push_back(n);
}

return rest;

}



 int main()
 {
     optimization();
int lim=1e8;
prime_gen(lim);


int t;
cin>>t;
 while(t--)
 {
     long long int a,b;
cin>>a>>b;

vector<long long>vec_a=factorization(a);

vector<long long>vec_b=factorization(b);


int cnt=0;
int len_b=vec_b.size();
int len_a=vec_a.size();


if(len_b>len_a)
{
    cout<<"No"<<endl;
}else{

int num=vec_b.back();
auto it=find(vec_a.begin(),vec_a.end(),num);
if(it ==vec_a.end())
{
    cnt=1;
}
if(cnt==1)
{
    cout<<"No"<<endl;
}else{

cout<<"Yes"<<endl;
}

}

 }
     return 0;
 }
