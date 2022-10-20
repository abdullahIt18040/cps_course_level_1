
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a,b;
int ans=1;
while(cin>>n>>a>>b)
{
   while(1)
   {
        a++,b++;
    a>>=1,b>>=1;
    if(a==b)
        break;
    else
        ans++;
   }
   cout<<ans<<endl;

}


	return 0;
}
