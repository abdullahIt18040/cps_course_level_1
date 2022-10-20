#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimizastion() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1 && b==-1)
        {
            break;
        }
        else
        {
            int chan_a,chan_b;
            if(a>b)
            {
                chan_a=b;
                chan_b=a;
            }else{
            chan_a=a;
            chan_b=b;
            }


            int res=abs(a-b);
            int r_1=(99-chan_b)+chan_a+1;
            if(res<r_1)
            {
                cout<<res<<endl;
            }else{
            cout<<r_1<<endl;
            }


        }
    }

        return 0;

    }
