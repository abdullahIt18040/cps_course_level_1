#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
    // optimization();
     int tc;
     cin>>tc;
     int k=1;
     while(tc--)
     {

         double x,y,c;
         cin>>x>>y>>c;
         double lf=0,rf=min(x,y);
         for(int i=0;i<100;i++){
         double d=(lf+rf)/2;

         double h_1=sqrt( (x*x)-(d*d) );
         double h_2=sqrt( (y*y)-(d*d) );
         double h=(h_1*h_2)/(h_1+h_2);

         if(h<c)
         {
             rf=d;
         }else{
         lf=d;
         }


         }

         cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<lf<<endl;
         k++;
     }

 }
