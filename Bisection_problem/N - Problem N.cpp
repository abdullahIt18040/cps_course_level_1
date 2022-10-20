#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{




    while(1)
    {
        int n;
        cin>>n;

        if(n==0)
            break;


        multiset<int>ms;
        multiset<int>::iterator it;


        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            ms.insert(a);
        }



        int sum=0;

        while(ms.size()>1)
        {

            int p,q;
            it=ms.begin();

            p=*it;

            it++;
            q=*it;



            int c=(p+q);


            ms.erase(p);
            ms.erase(q);


            sum+=c;
            ms.insert(c);

        }

         cout<<sum<<endl;

    }




    return 0;
}
