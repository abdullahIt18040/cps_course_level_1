#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
double arr[1000099];

 int main()
 {

 //optimization();

for(  int i=1;i<1000099;i++)
{
    arr[i]=arr[i-1]+log10(i);

}


int t, k=1;
 cin>>t;
 while(t--)
 {
     int n,b;
     cin>>n>>b;
    int   res=(arr[n]/log10(b));
cout<<"Case "<<k<<": "<<res+1<<endl;
k++;
 }
 return 0;

 }
