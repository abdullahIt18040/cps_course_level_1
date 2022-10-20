#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vec;

        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            vec.push_back(a);
        }


        long long x,y;
        x=vec[0];
        y=vec[1];
        long long lcm=x*(y/(__gcd(x,y)));
        for(int i=2; i<vec.size(); i++)
        {

            x=lcm;
            y=vec[i];
            long long lcm=x*(y/(__gcd(x,y)));

        }
        cout<<lcm<<endl;




    }
}
