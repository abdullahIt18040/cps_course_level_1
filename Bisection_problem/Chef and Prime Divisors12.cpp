#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
const long long mx=1e18+123;
long long int NOD[mx];


 int main()
 {

     optimization ();

     long long int lim=1e18;
     for(ll i=1;i<=lim;i++)

     {
         for(ll j=i;j<=lim;j+=i)
         {
             NOD[j]++;
         }
     }

    return 0;

 }
