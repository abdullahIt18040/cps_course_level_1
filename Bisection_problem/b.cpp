#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 int main()
 {
     optimization();
     vector<int>vec;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         vec.push_back(a);
     }
     for(int i=n-1;i>=0;i--)
     {
         cout<<vec[i]<<" ";
     }
     return 0;
 }
