#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 int main()
 {
optimization();

    while(1)
    {
         priority_queue<int ,vector<int>,greater<int>>pq;
     int n;
     cin>>n;
     if(n==0)
        break;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         pq.push(a);
     }
int sum=0;
     while(pq.size()>1)
     {
         int x=pq.top();
         pq.pop();
         int y=pq.top();
         pq.pop();
         int res=x+y;
         sum+=res;
         pq.push(res);

     }
     cout<<sum<<endl;
    }
    return 0;

 }
