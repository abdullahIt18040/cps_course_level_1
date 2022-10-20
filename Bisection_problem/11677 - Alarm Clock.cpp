#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {

     //optimization();

     int h1,h2,m1,m2;
     while(cin>>h1>>m1>>h2>>m2)
     {
         int res,res2;

         res=abs(h1-h2)%23;
         res2=abs(m1-m2)%59;
         int fres=(res*60)+res2;
         cout<<fres<<endl;
     }
     return 0;

 }
