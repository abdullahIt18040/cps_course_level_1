#include<bits/stdc++.h>
using namespace std;
#define end '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e8;
bitset<mx>is_prime;
vector<int>prime;
void primeGen(int n)
{
    for(int i=3; i<=n; i+=2)
    {
        is_prime[i]=1;
    }

    int sq=sqrt(n);

    for(int i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i; j<=n; j+=(i+i))
            {
                is_prime[j]=0;
            }
        }
    }

    is_prime[2]=2;
    prime.push_back(2);

    for(int i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)
            prime.push_back(i);
    }
}
int arr[5000007];
int res[5000007];



void  NOD(int  n)
{

arr[0]=0;
    int ret=0,tem=n;
    for(auto p:prime)
    {
        long long len=p*p;
        if(len>n)
            break;
        if(n%p==0)
        {
            ret+=p;
            while(n%p==0)
            {
              n/=p;
            }
        }
    }
    if(n>1)
        ret+=n;


    if(is_prime[ret]==1)
      arr[tem]=1;
      else{
        arr[tem]=0;
      }

}

int main()
{
optimization();
    int lim=1e6;
    primeGen(lim);
    for(int i=2;i<=5000000;i++)
    {
     NOD(i);
    }

    res[0]=0;
      res[1]=0;
    for(int i=1;i<=5000000;i++)
    {
        res[i]=arr[i]+res[i-1];
    }



    while(1)
    {
     long long    int n,m;
    cin>>n;
    if(n==0)
        break;
        int sum;
    cin>>m;

    sum=(res[m]-res[n-1]);


    cout<<sum<<endl;
    }




    return 0;

}
