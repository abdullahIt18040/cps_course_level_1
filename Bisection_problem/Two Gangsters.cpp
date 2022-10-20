#include<bits/stdc++.h>
using namespace std;
 int main()
 {

   int n;
   string str;
    cin>>n>>str;
   int len=str.size();

   int lim;
   if(n%len==0)
   {
       lim=len;
   }else{

   lim=n%len;
   }


   int num=n;
   for(int i=1;i<=20;i++)
   {
       int k=(n-(len*i));


       if(k<lim)
      {
          break;

      }else{
      num=num*k;
      }

   }
cout<<num<<endl;

     return 0;
 }
