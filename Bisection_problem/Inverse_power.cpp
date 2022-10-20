#include<bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
 {

       long long a,b,p,m;
    cin>>a>>b>>m;

    p=m-2;
    long long ans=1;

    while(p>0)
    {

     if(p%2 !=0)
     {
            ans*=b;
        ans%=m;
     }
     b*=b;
     b%=m;
     p/=2;


    }
    ans=ans%m;
    cout<<ans<<endl;

    long long fin,res=a%m;
     fin=(res*(ans))%m;
     cout<<fin<<endl;



 }
