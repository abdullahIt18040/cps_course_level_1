#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx=1e6+123;
typedef long long ll;
 ll facto[mx];
 ll invfact[mx];

 ll powmod(ll b,ll m)
 {
     int p=(m-2);
     ll ans=1;
     while(p>0)
     {
         if(p%2 == 1)
         {
             ans*=b;
             ans%=m;
         }
         b*=b;
         b%=m;
         p/=2;

     }
     return ans;


 }




 int main()
 {
     int mod=1000003;

     int lim=1e6;
     facto[0]=1;
     invfact[0]=1;

     for(int i=1;i<=lim;i++)
     {
         facto[i]=(facto[i-1]*i)%mod;
         invfact[i]=(powmod(facto[i],mod))%mod;

     }
  //   cout<<invfact[100];

     int tc,cnt=1;
     cin>>tc;
     while(tc--)
     {
        int n,r;
        cin>>n>>r;
        ll res=(facto[n]*invfact[n-r]*invfact[r])%mod;
        cout<<"Case "<<cnt<<": "<<res<<endl;
        cnt++;
     }

return 0;


 }
