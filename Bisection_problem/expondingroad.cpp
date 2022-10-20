#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_stdio(0);cin.tie(0);cout.tie(0);

 int main()
 {

  int t,k=1;
  cin>>t;
  while(t--)
  {
     double L,c,n;
     cin>>L>>n>>c;

     double L1=((1+(n*c))*L);
double l=0,r=1e18;
     for(int i=0;i<100;i++)
     {

         double R=(l+r)/2;

         double ans=(R*2.0)*asin(L/(2.0*R));
         if(ans<L1)
         {
             r=R;
         }else{
             l=R;

         }



     }
     double R=l;
     double h=R-sqrt((R*R)-((L/2.0)*(L/2.0)));

     cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<h<<endl;
     k++;



  }



 }
