#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimization();


   long long  int n,m;
    cin>>n>>m;
 long long   int res=0,tem=1;
     for( long long int i=1;i<=m;i++)
     {
         long long int a;
         cin>>a;
         if(a>=tem)
         {
             res+=(a-tem);
         }else{

         long long int num=n-(tem-a);
         res+=num;
         }
         tem=a;

     }

     cout<<res<<endl;

    return 0;

}
