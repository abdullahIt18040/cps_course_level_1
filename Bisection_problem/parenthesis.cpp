#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
     cin>>t;
      while(t--)
      {
          string str;
          cin>>str;
         stack<char>rem1;
         ll len=str.size();
         int a=0;

         if(len%2==0)
         {
             for(int i=0;i<len;i++)
             {
                 if(str[i]=='(' ||str[i]=='[')
             {
                 rem1.push(str[i]);
             }else if(str[i]==')' && !rem1.empty()&& rem1.top()=='(')
             {
               rem1.pop();
             }else if(str[i]==']' && !rem1.empty() && rem1.top()=='[')
             {

              rem1.pop();

             }else{

             rem1.push(str[i]);

             }


             }

             if( rem1.empty())
             {
                 cout<<"Yes"<<endl;
             }else{
             cout<<"No"<<endl;}




         }else{
         cout<<"No"<<endl;
         }





      }
      return 0;
}
