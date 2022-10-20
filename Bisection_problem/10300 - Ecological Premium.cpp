#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     int t;
      cin>>t ;
       while(t--)
       {
         int n;
         cin>>n;
         vector<int>vec;
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             vec.push_back(x);
         }
         sort(vec.begin(),vec.end());
         int r_1,r_2;
         r_1=vec[n-1]-vec[0];
         cout<<r_1*2<<endl;
       }
 }
