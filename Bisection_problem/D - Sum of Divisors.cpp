#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimiuzation() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long mx=1e7+123;
int cnt[mx];
 int main()
 {
     optimiuzation();
     long long int sum=0,n;
     cin>>n;
     for(long long int i=1;i<=n;i++)
     {
         for(long long int j=i;j<=n;j=j+i)
         {
             cnt[j]++;
         }
     }
     for( long long int i=1;i<=n;i++)
     {
         sum+=(i*cnt[i]);
     }
     cout<<sum<<endl;

return 0;
 }
