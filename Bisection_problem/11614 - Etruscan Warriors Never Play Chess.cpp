#include<bits/stdc++.h>
using namespace std;

#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
  //  optimization();
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        cin>>num;
       double res,del;
       del=sqrt(1+ (8*num));
       res=(-1+del)/2;
      long long fres=floor(res);
      cout<<fres<<endl;



        }



    return 0;
}
