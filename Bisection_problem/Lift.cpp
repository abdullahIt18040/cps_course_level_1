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

      int a,b;
      cin>>a>>b;
      int flr;
      if(a<=b)
      {
          flr=b;

      }else{


      flr=a+(a-b);
      }

      int res=(flr*4)+19;
      cout<<"Case "<<k<<": "<<res<<endl;
      k++;





  }

    return 0;

}
