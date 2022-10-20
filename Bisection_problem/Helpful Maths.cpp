#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_sdtio(0);cin.tie(0);cout.tie(0);

 int main()
 {
double res,x,y;
 int a,b,c,d;

cin>>a>>b>>c>>d;
if(d<a)
{
    x=1;
    cout<<fixed<<setprecision(12)<<x<<endl;
}else{

int num=(b-a);
res=double (c)/double(num);
 cout<<fixed<<setprecision(10)<<res<<endl;
}


     return 0;
 }
