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
         long long int a,b,res;
     cin>>a>>b;
    res=  __gcd(a, b);

    if(res>1)

    {
        cout<<"Yes"<<endl;
    }else{
    cout<<"No"<<endl;
    }
    }



     return 0;

 }
