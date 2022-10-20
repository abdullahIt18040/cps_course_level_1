#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
int a,b;
int p=1;
while(cin>>a>>b)
{
    if(a==0 && b==0)
        break;
    else{
            int res,ans=0;
    for(int i=1;i<=26;i++)
    {
        res=b*i;
        if(b+res>=a)
        {
            ans=i;
            break;
        }
    }
    if(b>a)
    {
         cout<<"Case "<<p<<": 0"<<endl;
    }else if(ans==0)
    {
        cout<<"Case "<<p<<": impossible"<<endl;
    }else  {
    cout<<"Case "<<p<<": "<<ans<<endl;
    }


    }
p++;
}

    return 0;

}
