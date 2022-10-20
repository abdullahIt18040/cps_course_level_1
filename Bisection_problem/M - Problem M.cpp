#include<bits/stdc++.h>
using namespace std;
 int main()
 {


         stack<char>stk;
     string str;

   while(1)
   {


       char x[5];
       cin>>x;
       int len=strlen(x);
       if(len==0)
        break;


       stk.push(x[0]);
   }

  while(!stk.empty())
  {
     char p=stk.top();
     if(p)
      stk.pop();
  }

 }
