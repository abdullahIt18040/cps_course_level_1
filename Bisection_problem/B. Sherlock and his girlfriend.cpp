#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx=1e8+123;
bitset<mx>is_prime;
vector<int>prime;

void prime_gen(int n)
{
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(is_prime[i]==1)
        {
            for( int j=i*i;j<=n;j+=(i+i))
            {

              is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }

}



int main()
{
    int lim=1e8;
    prime_gen(lim);

    int num;
    cin>>num;
    if(num>2)
    {
        cout<<2<<endl;
        for(int i=1;i<=num;i++)
        {
            int t=i+1;
            if(is_prime[t]==1){
                cout<<2;
            }
            else
            {
                cout<<1;
            }
            cout<<" ";
        }
        cout<<endl;

    }else{

    cout<<"1"<<endl;
    for(int i=1;i<=num;i++)
    {
        cout<<1<<" ";
    }

cout<<endl;
    }

}
