
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const  int mx = 1e6+123;
#define ll long long
int  n;
long long int arr[mx];
int getval(ll  num)
{
    ll ans=num,p=1;
    for(ll i=0;i<n;i++)
    {
        ans+=arr[i];
        if(ans<=0)
        {

            return p;
        }
    }
        p++;

    return p;
}


 int main()
 {

     int t;
     cin>>t;
     int k=1;
     while(t--)
     {

         cin>>n ;
         for(ll i=0;i<n;i++)
         {
             cin>>arr[i];
         }

         ll lf=0,rf=1e14;
         ll res=0;
         while(lf<=rf)
         {
             ll mid=(lf+rf)/2;
             if(getval(mid)>1)
             {
                 rf=mid-1;
                 res=mid;
             }else{
             lf=mid+1;
             }

         }
//         if(res==0)
//            res++;


        // cout<<"Scenario #"<<k<<": "<<res<<endl;
        cout<<res;
         k++;
     }
 }
