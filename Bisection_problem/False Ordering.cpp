#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
const int mx=1e7;
bitset<mx>is_prime;
vector<int>prime;
void prime_gen(int n)
{
    for(int i=3; i<=n; i+=2)
    {
        is_prime[i]=1;
    }

    int sq=sqrt(n);

    for(int i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }

    is_prime[2]=1;
    prime.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }


}


vector<int>primePower[1234];
int NOD[1234];
int main()
{


int lim =1e3;
prime_gen(lim);

for(auto p:prime)
{
    for(int i=p;i<=lim;i+=p)
    {
        int cnt=1;
        int tem=i;
        while(tem%p==0)
        {
            tem=tem/p;
            cnt++;
        }

        primePower[i].push_back(cnt);
    }
}

for(int i=1;i<=lim;i++)
{
    NOD[i]=1;
    for(auto u:primePower[i])
    {
        NOD[i]*=u;
    }
}


vector<pair<int,int>>vec;

for(int i=1;i<=lim;i++)
{
    vec.push_back({NOD[i],-i});
}
sort(vec.begin(),vec.end());
int tc,k=1;
cin>>tc;
while(tc--)
{
    int n;
    cin>>n;

    cout<<"Case "<<k<<": "<<vec[n-1].second*-1<<endl;

}





}
