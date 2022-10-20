
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 int main()
 {
     vector<int>vec[123];
     vec[0].push_back(0);
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    int sq=sqrt(i);
    for(int j=1;j<=sq;j++)
    {
        if(i%j==0)
        {
            vec[i].push_back(j);
            if(i/j != j)
        {
            vec[i].push_back(i/j);
        }
        }

    }

}
for(int i=1;i<=n;i++)
{
    cout<<" divisor of "<<i<<" is  : ";
    for(auto u:vec[i])
    {
        cout<<u<<" ";
    }
    cout<<endl;
}


return 0;
 }
