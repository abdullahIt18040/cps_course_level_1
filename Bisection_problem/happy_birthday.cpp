#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str={"Happy", "birthday", "to", "you", "Happy",
                    "birthday", "to", "you", "Happy", "birthday", "to",
                    "Rujia", "Happy", "birthday", "to", "you"};





             int n, m=1,k=0;
          cin>>n;
          m=ceil(n/16)+1;
          vector<string>name;

          for(int i=0;i<n;i++)
          {
              string x;
              cin>>x;
              name.push_back(x);
          }

          for(int i=0,j=0;j<m*16;i++,k++,j++)
          {
               if(i==n)
               {
                   i=0;
               }
               if(j%16==0)
               {
                   k=0;
               }


               cout<<name[i]<<": "<<str[k]<<endl;
          }
return 0;

}
