#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007

int main()
{
    //r=b^p mod m


   long long  int p,b=2;
    cin>>p;

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
            cout<<ans<<endl;
            return 0;


}
