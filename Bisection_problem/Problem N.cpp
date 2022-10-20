#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef long long ll;
typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
/// change ll to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item
 int main()
 {

     while(1)
     {
         int n;
     cin>>n;
     if(n==0)
        break;
   ordered_set  ps;
     for(int i=0;i<n;i++)
     {
         int a;
          cin>>a;
       ps.insert(a);

     }
int cnt=0;
int sum=*ps.begin();

 for(auto it=ps.begin()++;it!=ps.end();it++)
 {

 int num=*it;
 sum+=num;
 cnt+=sum;
 cout<<sum<<" ";
 ps.erase(num);
 ps.insert(sum);
 }

 }
 return 0;
 }
