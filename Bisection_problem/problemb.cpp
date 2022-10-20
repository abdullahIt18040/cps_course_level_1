#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
   optimization();
     int t;
     cin>>t;
     while(t--)
     {

         long long a,b,x,y,p,q,r,t,ans=0;
         cin>>a>>b;
         if(a>=b)
         {
             x=a,y=b;

         }else{

         x=b,y=a;
         }

         p=(x/4);
         q=y/4;
         r=x%4;
         t=y%4;
         if(p>0&&q>0)
         {
            //cout<<"yes";
             ans=(p+q);
             if((r+t)>3)
             {
                 ans=ans+1;
             }
         }else if(p==0 &&q==0)
         {
             if(x+y==0)
             {
                 ans=0;
             }else{
             ans=ans+1;
             }
         }else{


         while(x>0&&y>0)
         {
             x=x-3;
             y=y-1;
             ans++;
         }
         }



         cout<<ans<<endl;





     }
     return 0;

 }
