#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


 int main()
 {
     optimization();

  int tc;
  cin>>tc;
  while(tc--)
  {

     int a,b,c,cnt=0;
     cin>>a>>b>>c;
     if((a+b)==c)
     {
         cnt=1;
     }else if((a+c)==b)
     {
         cnt=1;
     }else if((b+c)==a)
     {
         cnt=1;
     }else{
     cnt=0;
     }

     if(cnt==1)
     {
         cout<<"YES"<<endl;
     }else{
     cout<<"NO"<<endl;
     }
  }



     return 0;

 }
