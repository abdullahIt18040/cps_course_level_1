#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimiuzation() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e5+123;
vector<int>divisor[mx];
 int main()
 {
     optimiuzation();
     int n;
      cin>>n;
      for(int i=1;i<n;i++)
      {

          for(int j=i;j<=n;j=j+i)
          {
            divisor[j].push_back(i);

          }
      }

      for(int i=1;i<=n;i++)
      {
          cout<<" divisor of "<<i<<" is : ";
          for(auto u:divisor[i])
          {
              cout<<u<<" ";
          }
          cout<<endl;
      }





 }
