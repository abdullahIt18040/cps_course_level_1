#include<bits/stdc++.h>
using namespace std;


 int main()
 {
int tc,k=1;
cin>>tc;
while(tc--)
{
    int n;
    cin>>n;
    int max_num=-1;
    for(int i=0;i<n;i++)
    {

        int a;
        cin>>a;
        if(max_num<a)
        {
            max_num=a;
        }
    }

    cout<<"Case "<<k<<": "<<max_num<<endl;
    k++;
}


 return 0;
 }
