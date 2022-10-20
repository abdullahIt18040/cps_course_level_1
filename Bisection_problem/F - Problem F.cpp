#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {

int t;
cin>>t;
getchar();
while(t--)
{
    string str;

cin>>str;

stack<char>rem;
int a=0;
int len=str.size();
for(int i=0;i<len;i++)
{
    char x=rem.top();
    if(str[i]=='(' || str[i]=='[')
    {
        rem.push(str[i]);
    }else if(str[i]==')' && x=='(')
    {
        rem.pop();
    }else if(str[i]==']' && x=='[')
    {
        rem.pop();
    }else{
    a=1;

    }
}

    if(a==0 && rem.empty())
    {
        cout<<"Yes"<<endl;
    }else{
    cout<<"No"<<endl;;
    }




}
return 0;
 }
