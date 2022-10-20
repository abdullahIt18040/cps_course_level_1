#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
/// change ll to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

 int main()
 {

     optimization()
     int n,k;
     cin>>n>>k;
     ordered_set ps;
     for(int i=1;i<=n;i++)
     {
         ps.insert(i);
     }

     int pos=0;

     while(ps.size()>0)
     {
         pos=pos+(k-1);
         pos%=ps.size();
         int val = *ps.find_by_order(pos);
         ps.erase(val);
         pos=ps.order_of_key(val);
         cout<<val<<" ";

     }
     cout<<endl;
   return 0;

 }
