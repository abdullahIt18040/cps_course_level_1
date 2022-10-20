#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e6;
bitset<mx>is_prime;
vector<int>prime;

void primegen(int n)
{

   for(int i=3;i<=n;i+=2)
   {
       is_prime[i]=1;
   }

   int sq=sqrt(n);
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
       {
           prime.push_back(i);

       }
   }





}

int NOD(long long n)
{int res=1;

  for(auto p:prime)
  {

      long long len=p*p;
      if(len>n)
        break;
      if(n%p==0)
      {
          int cnt=1;
          while(n%p==0)
          {
              n/=p;
              cnt++;
          }
          res*=cnt;
      }
  }

  if(n>1)
    res*=2;


  return res;

}

 int main()
 {
     optimization();
     int lim=1e6;
     primegen(lim);
int tc;
cin>>tc;
while(tc--)
{
    long long m;
    cin>>m;
    cout<<NOD(m)<<endl;
}



     return 0;

 }
