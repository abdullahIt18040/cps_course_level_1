#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define  optimization() ios_base::sync_with_stdio(0);cin.tie(0).cout.tie(0);

const int MX = 1e7+123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;
int arr[MX];

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

 int main()
 {
     int lim=1e7;
     primeGen(lim);

     for(int i=1;i<=3200;i++)
     {
         for(int j=1;j<=60;j++)
         {
             int p=(i*i)+(j*j*j*j);
             if(p>lim)
                continue;
           if(is_prime[p]==1){

                arr[p]=1;
             }
         }
     }

     for(int i=1;i<=lim;i++)
     {
         arr[i]+=arr[i-1];
     }


 int t;
  cin>>t;
  while(t--)
  {
          int num;
     cin>>num;
     cout<<arr[num]<<endl;

  }
     return 0;
 }

