#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
{
string str;
while(getline(cin,str))
{
    int p=0;
    int len=str.size();
   for(int i=0;i<len;i++)
   {
       if(str[i]=='"')
       {
           if(p==0)
           {
               cout<<"``";
               p=1;
           }else{
           cout<<"''";
           p=0;
           }
       }else{

       cout<<str[i];}

   }
   cout<<endl;
}

    return 0;

}
