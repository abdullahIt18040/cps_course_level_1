#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimization()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6+123;
int NOD[mx];

 int main()
 {
    optimization();
    int lim=1e6;

for(int i=1;i<=lim;i++)
{
    for(int j=i;j<=lim;j+=i)
        NOD[j]++;
}


int tc;
cin>>tc;
while(tc--)
{
    int a,b;
cin>>a>>b;
cout<<NOD[__gcd(a,b)]<<endl;
}


    return 0;
 }
