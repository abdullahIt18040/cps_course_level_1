
#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


 int main()
 {
     optimization();

  int tc;
  cin>>tc;
  while(tc--)
  {
vector<int>vec;
int a,b,cnt=0;
cin>>a>>b;
for(int i=0;i<a;i++)
{
    int x;
    cin>>x;
    vec.push_back(x);
    if(x==1)
    {
        cnt=1;
    }
}
if(cnt==1)
{
    cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}

vec.clear();

  }



     return 0;

 }
