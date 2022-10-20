
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e6+123;
bitset<MX> is_prime;
vector<int> prime;

  vector<int>numdiv;
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


void  NOD (long long n)
{ long long int num=n;
     vector<int>numdiv;
    int ret = 1;
    for ( auto p : prime ) { // p = 5
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {


            while ( n % p == 0 ) {
                n /= p;
                 numdiv.push_back(p);
            }


        }
    }

    if ( n > 1 ) numdiv.push_back(n);

if(numdiv.size()>=1)
{
    int len=numdiv.size();
    int  fval=numdiv[len-1];
    long long rest=1;

    for(int i=0;i<numdiv.size()-1;i++)
    {
       rest*=numdiv[i];
    }

    long long last=rest*fval;
if(last==num)
    cout<<rest<<fval<<endl;
    else{
        cout<<"-1"<<endl;

    }




}else{

cout<<"-1"<<endl;
}




}



int main()
{
    optimize();
    int lim = 1e6;
    primeGen(lim);

  int tc,k=1;
  cin>>tc;
  while(tc--)
  {
     int num;
     long long lim=1e8+123;
     cin>>num;
     if(num<=9)
        cout<<num<<endl;
     else{
            if(num<lim)

            NOD(num);
            else{

                cout<<"-1"<<endl;
            }

     }

  }



    return 0;
}
