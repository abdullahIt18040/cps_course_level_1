#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6+123;
vector<int>prime;
bool is_prime[mx];

void prim_gen(int n)
{
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=i+i;j<=n;j=j+i)
        {
            is_prime[j]=0;
        }
    }
is_prime[2]=0;

    for(int i=1;i<=n;i++)
    {
        if(is_prime[i]==1)
            prime.push_back(i);
    }





}
 int main()
 {
     prim_gen(1e6);
     int n;
      while(cin>>n)
      {
       if(n==0)
            break;
       else{

            int p,q,dif=-1;
    for(int i=0;i<prime.size();i++)
    {
       if(prime[i]>n)
        break;
       else{

         int a,b;
        a=prime[i];
        b=n-a;
        if(abs(b-a)>dif && is_prime[b]==1)
        {
            dif=abs(b-a);
            p=a;
            q=b;

        }
       }
    }
    if(dif==-1)
    {
        cout<<"Goldbach's conjecture is wrong."<<endl;
    }else{
        cout<<n <<" = "<<p<<" + "<<q<<endl;

    }








       }
      }



 }
