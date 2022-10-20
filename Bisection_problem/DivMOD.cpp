#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007

int main()
{
    //r=(a/b) mod m


   long long  int p,a,b,m;
    cin>>a>>b>>m;
    p=m-2;

    long long int ans=1;
    while(p>0)
    {
        if(p%2 !=0)
        {
            ans*=b;
            ans%=mod;

        }
        b*=b;
        b%=mod;
        p/=2;


            }
             long long res=ans*(a%m);
             res%=m;
             cout<<res<<endl;




            return 0;


}
