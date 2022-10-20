#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
 int main()
 {

   optimization();
   map<string,int>name;
   name["Alice"] = 1;
   name["Ariel"] = 1;
   name["Aurora"] = 1;
   name["Phil"] = 1;
   name["Peter"] = 1;
   name["Olaf"] = 1;
   name["Phoebus"] = 1;
   name["Ralph"] = 1;
   name["Robin"] = 1;

   name["Bambi"] = 2;
   name["Belle"] = 2;
   name["Bolt"] = 2;
   name["Mulan"] = 2;
   name["Mowgli"] = 2;
   name["Mickey"] = 2;
   name["Silver"] = 2;
   name["Simba"] = 2;
   name["Stitch"] = 2;

   name["Dumbo"] = 3;
   name["Genie"] = 3;
   name["Jiminy"] = 3;
   name["Kuzko"] = 3;
   name["Kida"] = 3;
   name["Kenai"] = 3;
   name["Tarzan"] = 3;
   name["Tiana"] = 3;
   name["Winnie"] =3;



   int n;

   vector<int>vec;
   cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int a=name[str];
        vec.push_back(a);



    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=abs(vec[i]-vec[i+1]);
    }
    cout<<sum<<endl;
    return 0;

 }

