#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>resvec;
 vector<long long int>vec;
long long int fndlow( long long int n)
{

    long long  int num= *lower_bound(vec.begin(),vec.end(),n);
    int val=lower_bound(vec.begin(),vec.end(),n)-vec.begin();
    resvec.push_back(val);
    return num;
}

 int main()
 {

     vec[0]=1;
     for(int i=1;i<20;i++)
     {
         long long int res=(i)*vec[i-1];
         vec[i]=res;
     }

     int t;
     cin>>t;
     while(t--)
     {
       long long   int n,res;
       cin>>n;
       x:
       long long int lowbond=fndlow(n);
       long long sub=(n-lowbond);
        if(sub!= 0)
       {
           fndlow(sub);
           n=sub;
           goto x;

       }
       for(int i=0;i<=resvec.size();i++)
       {
           cout<<resvec[i]<<"!";
       }






     }



 }
