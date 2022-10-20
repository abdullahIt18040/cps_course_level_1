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
int b=0,r=0,c=0,bp=-1,rp=-1,bc,rc;
  for(int i=0;i<8;i++)
  {
    string str;
    cin>>str;
    for(int j=0;j<8;j++)
    {
         if(str[j]=='B'){
        b=1;
        bp=j;
        bc=i;
    }
    else if(str[j]=='R'){
        r=1;
        rp=j;
        rc=i;
    }
    else
    {
        c=0;
    }
    }



  }

  if(bp>rp)
  {
      cout<<"B"<<endl;
  }else if(bp==rp)
  {
      if(bc>rc)
      {cout<<"B"<<endl;

      }else{
      cout<<"R"<<endl;
      }
  }else

  {
  cout<<"R"<<endl;
  }


  }



     return 0;

 }
