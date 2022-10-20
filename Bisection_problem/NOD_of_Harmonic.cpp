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

vector<int>primepower[1234];


void Num_Divisor(int n)
{
    for(auto p:prime)
    {
        for(int i=p;i<=n;i+=p)
        {
            int cnt=1;
            int tem=i;
            while(tem%p==0)
            {
                tem=tem/p;
                cnt++;
            }
            primepower[i].push_back(cnt);

        }
    }
}



 int main()
 {
     optimization();
     int lim=1e6;
     prime_gen(lim);


     int n;
     cin>>n;

     Num_Divisor(n);
     int NOD[123];
     for(int i=1;i<n;i++)
     {

      NOD[i]=1;
         for(auto p:primepower[i])
         {
            NOD[i]*=p;;
         }

     }

     for(int i=1;i<n;i++)

     {

         cout<<i<<"   = "<<NOD[i]<<endl;
     }


   return 0;

 }
