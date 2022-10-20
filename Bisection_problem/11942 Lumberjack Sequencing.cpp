#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     optimization();
     int t;
      cin>>t;
      cout<<"Lumberjacks:"<<endl;
       while(t--)
       {
           int as=0,ds=0;
           int x;
           cin>>x;
           for(int i=1;i<10;i++)
           {
               int a;
               cin>>a;

               if(a>=x)
               {
                   ds=1;
               }
               if(a<=x)
               {
                   as=1;
               }
               x=a;
           }
           if(as==1 && ds==1)
           {
               cout<<"Unordered"<<endl;
           }else
           {
               cout<<"Ordered"<<endl;
           }

       }
 }
