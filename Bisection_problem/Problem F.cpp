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
        stack<char>stk;
        stack<char>stk2;
        string str;
        cin>>str;
        int len=str.size();
        int a=0,b=0,c=0,d=0;
        for(int i=0; i<len; i++)
        {
            if(str[i]=='(')
            {
                stk.push(str[i]);
            }
            else if(str[i]==')')
            {
                if(!stk.empty())
                {
                    stk.pop();
                }
                else
                {

                    a=1;
                    cout<<"No"<<endl;
                    break;
                }
            }


            if(str[i]=='[')
            {
                stk.push(str[i]);
            }
            else if(str[i]==']')
            {
                if(!stk.empty())
                {
                    stk.pop();
                }
                else
                {

                    a=1;
                    cout<<"No"<<endl;
                    break;
                }
            }



        }
        if(a==0)
        {
            if(stk.empty())
            {
                cout<<"Yes"<<endl;
            }else{

            cout<<"No"<<endl;
            }
        }



    }


return 0;


}
