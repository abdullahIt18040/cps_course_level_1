
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

int p,a,b,c,d,n;
while(cin>>p>>a>>b>>c>>d>>n)
{
double max_num=p*(sin(a+b)+cos(c+d)+2);
     double max_decline=0;
     for(int i=2;i<=n;i++)
     {
         double current=p*(sin((i*a)+b)+cos((i*c)+d)+2);
         if(max_num>current)
         {
             if(max_decline<max_num-current)
                max_decline=max_num-current;

         }else{
         max_num=current;

         }
     }
     cout<<fixed<<setprecision(8)<<max_decline<<endl;
}


return 0;

}
