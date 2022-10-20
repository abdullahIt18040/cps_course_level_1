#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
const int mx=1e6+123;

ll fac[mx];
ll  invrs[mx];


ll  fact(int n,int m)
{
    ll ans=1;
    for(int i=1; i<=n; i++)
    {
        ans*=i;
        ans%=m;
    }
    return ans;
}


long long int powmod(int b,int m)
{
    int p=m-2;

    ll ans=1;
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
    return ans;


}

int main()
{

    ll  mod=1000003;
    int lim=1e6;
    fac[0]=1;
    for(int i=1; i<=lim; i++)
    {
        ll  res= fact(i,mod);
        res %=mod;
        fac[i]=res;
    }
    invrs[0]=1;

    for(int i=1; i<=lim; i++)
    {
        ll  res= powmod(fac[i],mod);
        res %=mod;
        invrs[i]=res;

    }

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,r;
        cin>>n>>r;

        long long res=(fac[n]*invrs[n-r]*invrs[r])%mod;

        cout<<res<<endl;
    }






}
