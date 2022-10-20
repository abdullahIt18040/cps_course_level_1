#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     optimization();
     int t;
     cin>>t;

     while(t--)
     {
         string str;
    cin>>str;
         int len=str.size();
         int sum=0,k=0;
         for(int i=0;i<len;i++)
         {
             if(str[i]!='X'){
                k++;
                sum+=k;
             }else{
             k=0;
             }

         }
         cout<<sum<<endl;
     }
     return 0;
 }
