#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   optimization();
int t;
cin>>t;
int k=1;
   while(t--)
   {
      int n;
      vector<int>vec;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          vec.push_back(x);
      }
      int srt=vec[0],p=0;
      int cnt_1=0,cnt_2=0;
      for(int i=1;i<n;i++)
      {
          if(vec[i]>srt)
          {
              cnt_1++;
          }else if(vec[i]<srt)
          {
              cnt_2++;
          }else{
          p=0;
          }
          srt=vec[i];
      }

      cout<<"Case "<<k<<": "<<cnt_1<<" "<<cnt_2<<endl;
      k++;



   }

return 0;
}
