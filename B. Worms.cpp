#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6+123;

int arr[mx];

int fndnum(int m,int len)
{
    int lf=0,rf=len,ans=0;
    while(lf<=rf)
    {
        int mid=(lf+rf)/2;
        if(arr[mid]>=m)
        { ans=mid;

            rf=mid-1;
        }else{



        lf=mid+1;}

    }
    return ans;
}
int main()
{
    optimization();
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        arr[i]=sum;

    }

    int num;
     cin>>num;
     for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        int res=fndnum(x,n);
        cout<<res+1<<endl;
    }


return 0;
}
