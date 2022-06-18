#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//const int mx=1000000;
 int main()
 {
     optimization();
int  arr[100000];
     int n,k;
      cin>>n>>k;
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];

      }
      int mn=INT_MAX;
      int ans=0;
      for(int i=0;i<n;i++)
      {
          ans=arr[i];
          for(int j=i;j<n;j++)
          {
              j=j+k;
              ans+=arr[j];
              j--;
          }
          if(ans<mn)
          {
              mn=ans;
          }
      }
      cout<<mn<<endl;







     return 0;
 }
