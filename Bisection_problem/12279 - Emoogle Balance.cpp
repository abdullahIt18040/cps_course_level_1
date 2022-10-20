#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {

int t;
cin>>t;
while(t--)
{

  int a,num,cnt=0;
  cin>>a;
  num=a;
  for(int i=0;i<4;i++)
  {
    int x;
    cin>>x;
    if((num+1)!=x)
    {
        cnt=1;

    }else{

    num=x;
    }
  }

  if(cnt==1)
  {
      cout<<"N"endl;
  }else{
  cout<<"Y"<<endl;
  }
}
return 0;

}

