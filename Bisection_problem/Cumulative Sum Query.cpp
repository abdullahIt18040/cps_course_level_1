#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int ex=1e5+123;
int arr[ex];
int main()
{

    optimization();
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(i==0)
    {
        arr[i]=a;
    }else{

    arr[i]=arr[i-1]+a;
    }
}

int m;
cin>>m;
 for(int i=0;i<m;i++)
 {
     int p,q;
     cin>>p>>q;
     int res;
     if(p==0)
     {
        res=arr[q];

     }else{

        res=(arr[q]-arr[p-1]);

     }

     cout<<res<<endl;
 }

return 0;
}
