#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     optimization();
     int t,k=1;
     cin>>t;
     while(t--)
     {
      int n,num=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          if(num<x)
          {
              num=x;
          }
      }

      cout<<"Case "<<k<<": "<<num<<endl;
      k++;
     }
     return 0;
 }
