
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


void NOD (long long n) // 60
{
    long long tem=n;
     vector<int>vec[12342];

    for ( auto p : prime ) { // p = 5
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {


            while ( n % p == 0 ) { // n = 5
                n /= p; // n = 5;
               vec[p].push_back(p); // 2
            }

            // 1 * 3 * 2
        }
    }

    if ( n > 1 ) vec[n].push_back(n);


    int cnt=0,len=sqrt(n);
    vector<int>result;

    for(int i=1;i<=tem;i++)
    {
        int res=1;
        for(auto u:vec[i])
        {
            res*=u;
        }
        if(res<10)
        {
           result.push_back(res);
        }else{
        cnt=1;
        break;
        }
    }

    if(cnt==0)
    {
        for(auto u:result)
        {
            if(u >1)
            cout<<u;
        }
        cout<<endl;
    }else{

    cout<<"-1"<<endl;
    }


}


int main()
{
optimize();

    int lim = 1e6;
    primeGen (lim);

    int T;
    cin >> T;

    while ( T-- ) {
        long long n;
        cin >> n;
        if(n<10)
        {
            cout<<n<<endl;
        }else{
                NOD(n);

        }


    }


    return 0;
}
