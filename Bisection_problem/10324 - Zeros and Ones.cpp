#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
    // optimization();
     string str;
     int k=1;
     while(cin>>str)
     {
         int n;
         cin>>n;
         cout<<"Case "<<k<<":"<<endl;
         k++;
         for(int i=0;i<n;i++)
         {
             int p,q;
             cin>>p>>q;
             int lf,rf;
             lf=min(p,q);
             rf=max(p,q);

             char x=str[lf];
             int t=0;
             for(int j=lf+1;j<=rf;j++)
             {
                 if(str[j] != x)
                 {
                     t=1;
                     break;
                 }

             }
             if(t==0)
             {
                 cout<<"Yes"<<endl;
             }else{
             cout<<"No"<<endl;
             }

         }



     }

 }
