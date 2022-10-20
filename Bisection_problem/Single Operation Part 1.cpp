#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{


    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int p,q;

        if(n%2==0)
        {
            p=n/2;
        }else{
        p=(n/2)+1;
        }

         if(m%2==0)
        {
            q=m/2;
        }else{
        q=(m/2)+1;
        }


   if(p>2 ||q>2 ||(m-q)>2 || (n-p)>2)
   {
       cout<<1<<" "<<1<<endl;
   }else{
       cout<<p<<" "<<q<<endl;

   }

    }


    return 0;
}
