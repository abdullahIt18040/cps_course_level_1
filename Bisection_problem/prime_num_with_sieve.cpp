#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cot.tie(0);
const int mx=1e6+123;
bool is_prime[mx];
vector<int>vec;
void prime_gener(int n)
{
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=i+i;j<=n;j=j+i)
        {
            is_prime[j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(is_prime[i]==1)
        {
            vec.push_back(i);
        }
    }

}
 int main()
 {

int n;
cin>>n;
prime_gener(n);


for(auto u:vec)
{
    cout<<u<<" ";
}
cout<<endl;

 }
