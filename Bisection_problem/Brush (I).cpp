#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int sum=0;
         for(int i=0;i<n;i++)
         {
             int a;
             cin>>a;
             if(a>0)
             {
                 sum+=a;
             }
         }

         cout<<"Case "<<k<<": "<<sum<<endl;
         k++;

     }
     return 0;

}
