#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define  optimization() ios_base::sync_with_stdio(0);cin.tie(0).cout.tie(0);

const int mx=1e8+123;
bitset<mx>is_prime;
int arr[mx];

void prime_gen(int n)
{

    n+=100;
    memset(is_prime,1,sizeof(is_prime));
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=n;j+=(i+i))
            {

                is_prime[j]=0;
            }

        }
    }

    is_prime[2]=1;

    int cnt=0;

    for(int i=1;i<=3200;i++)
    {

        for(int j=1;j<=60;j++)
        {
            int p=(i*i)+(j*j*j*j);
            if(is_prime[p]==1)
            {
                cnt++;
                arr[p]=cnt;
            }else{
            arr[p]=cnt;
            }
        }
    }

}


 int main()
 {
     int lim=1e8;
     prime_gen(lim);

     int num;
     cin>>num;
     cout<<arr[num];
     return 0;
 }
