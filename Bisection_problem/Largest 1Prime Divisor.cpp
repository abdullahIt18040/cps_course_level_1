#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e7+123;
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

 vector< long long> factorization(long long n)
 {

     vector<long long>vec;
     for(auto p:prime)
     {
         long long res=p*p;
         if(res>n)
         {
             break;
         }else{
             if(n%p==0)
             {

              vec.push_back(p);
                 while(n%p==0)
                 {
                     n=n/p;
                 }
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


     long long int m;

     while(cin>>m)
     {
         if(m==0)
            break;
         else{

           vector<long long>result= factorization(abs(m));
           if(result.size()<=1)
           {
                cout<<"-1"<<endl;
           }else{
           cout<<result.back()<<endl;
           }
         }
     }




     return 0;
 }
