#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {


    while(1)
    {
        queue<int>st;
        int n;
        cin>>n;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
        st.push(a);

        }

        int num1=1,cnt=0;
        int num2=n;

        while(!st.empty())
        {

          int x=st.front();

          st.pop();

          if(x==num1)
          {
              num1++;
          }else if(x<=num2)
          {
              num2=x;

          }else{
          cnt=1;
          break;

          }


        }
        if(cnt==1)
        {
            cout<<"no"<<endl;
        }else{
        cout<<"yes"<<endl;
        }


    }
    return 0;


 }
