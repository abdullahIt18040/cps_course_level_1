#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 int main()
 {
optimization();

     long long int b,p,m;
     cin>>b>>p>>m;

           long long int ans=1;
     for(int i=1;i<=p;i++)
     {
         ans*=b;
         ans%=m;
     }
     cout<<ans<<endl;

     return 0;

 }
