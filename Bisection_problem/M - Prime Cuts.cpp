#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e6+123;
bitset<MX> is_prime;
vector<int> prime;

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


    int lim = 1e6;
    primeGen (lim);
int n,c;
  while(scanf("%d%d",&n,&c))
  {

   vector<int>vec;
   vec.push_back(1);
   vec.push_back(2);
   int sq=sqrt(n);
   for(int i=3;i<=n;i+=2)
   {
       if(is_prime[i]==1)
       {
         for(int j=(i*i);j<=n;j+=(i+i))
         {
             if(is_prime[j]==1)
             {
                 vec.push_back(j);
             }
         }
       }
   }
   int p=0;
   int dil;
   int len=vec.size();
   if(len%2==0)
   {
        dil=(2*c);

   }else{

   dil=(2*c)-1;

   }

    if(dil>len)
       {
         p=1;

       }else{

       int lim=(len-dil);
       int srt=lim/2;
       int limnum=len-srt;
cout<<n<<" "<<c<<": ";
       for(int i=srt;i<limnum;i++)
       {
          cout<<vec[i]<<" ";

       }
       cout<<endl;


       }
int w=1;
       if(p==1)
       {

           cout<<n<<" "<<c<<": ";
           for(auto y:vec)
           {
               cout<<y<<" ";


           w++;
           }
          cout<<endl;
       }
       cout<<endl;

  }


    return 0;
}
