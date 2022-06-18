#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e4+123;
int arr[mx];
bool check(int m,int k ,int d)
{
    int last=arr[1]+d;
    k--;
    for(int i=2;i<=m;i++)
    {
        if(abs(arr[i]-last)>d)
        {
            if(k==0)
                return 0;
            last=arr[i]+d;
            k--;
        }
    }
    return 1;
}
 int main()
 {
     optimization();
     int t,p=1;
     cin>>t;
      while(t--)
      {
          int n,m,k;
          cin>>n>>m>>k;
          for(int i=1;i<=m;i++)
          {
              cin>>arr[i];
          }
       long long    int lf=0,rf=n;
          int ans;
          while(lf<=rf)
          {
              int mid=(lf+rf)/2;
              if(check(m,k,mid))
              {
                  ans=mid;
                  rf=mid-1;

              }else{
              lf=mid+1;
              }
          }
          cout<<"Case "<<p<<": "<<ans<<endl;
          p++;


      }
 }

